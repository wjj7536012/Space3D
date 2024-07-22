#include "stdio.h"
#include "math.h"
#include "windows.h"
#include "star.h"
#include "time.h"
#define PlanetNum 10
void main()
{
	//char ch;
	planet *p[PlanetNum];
	star *s[3];
	HWND hwnd;
	HDC hdc;
	hwnd=GetConsoleWindow();
	hdc=GetDC(hwnd);
	system("color 0d");
    srand((int)time(0));
	//for(int i=0;i<=2;i++)
	//{
	//  s[i]=new star(hdc);
	//}
	//s[0]=new star(hdc,RGB(0,0,255));
	//s[1]=NULL;
	//s[2]=NULL;
	//s[1]=new star(hdc,RGB(0,255,0));
	s[0]=new star(hdc,RGB(255,0,0));
	//s[1]=new star(hdc,RGB(0,255,0));
	//s[2]=new star(hdc,RGB(0,0,255));
	s[1]=NULL;
	s[2]=NULL;
	//s[0]->move(s[1],s[2]);
	//s[1]->move(s[0],s[2]);
	//s[2]->move(s[0],s[1]);
	IsClose=0;
while(1)
{	
	for(int j=0;j<=PlanetNum-1;j++)
	{
	  p[j]=new planet(hdc,s);
	}
	//planet *p=new planet(hdc,s);
	for(j=0;j<=PlanetNum-1;j++)
	{
	  p[j]->motion(p,j,PlanetNum);
	}
	while(1)
	{
	  //printf("%d\n",g_Dead);
	  if(g_Dead==PlanetNum)
	  {
         IsClose=1;
		 break;
	  }	  
	  Sleep(10);
	}
	Sleep(1000);
    g_Dead=0;
    IsClose=0;
	//delete[] p;
	for(j=0;j<=PlanetNum-1;j++)
	{
		delete p[j];
	}
	s[0]->IsDead=true;
	Sleep(1000);
	delete s[0];
	s[0]=new star(hdc,RGB(255,0,0));
}	
	/*while(1)
	{
	  char ch=getchar();
	  if(ch=='q')
	  {
		  IsClose=1;
		  break;
	  }
	  Sleep(10);
	}*/
	//getchar();
	//getchar();
	//delete []s;
	//delete []p;
	/*
    for(j=0;j<=PlanetNum-1;j++)
	{
	  delete p[j];
	}
	for(j=0;j<=2;j++)
	{
		delete s[j];
	}*/
	//delete []s;
	//printf("%d\n",g_FreeNum);
	//getchar();
	//getchar();

}