// 14.2zad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>   
#include <windows.h> 
#include <conio.h> 
#include <random>


using namespace std;

DWORD WINAPI city1thread(LPVOID);
DWORD WINAPI city2thread(LPVOID);
DWORD WINAPI city3thread(LPVOID);
DWORD WINAPI city4thread(LPVOID);
DWORD WINAPI city5thread(LPVOID);

int a,b,c;

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE thread[5];
	a=0;
	b=0;
	c=0;
		
	thread[0]	= CreateThread(NULL,0,city1thread,NULL, 0, NULL);
	thread[1]	= CreateThread(NULL,0,city2thread,NULL, 0, NULL);
	thread[2]	= CreateThread(NULL,0,city3thread,NULL, 0, NULL);
	thread[3]	= CreateThread(NULL,0,city4thread,NULL, 0, NULL);
	thread[4]	= CreateThread(NULL,0,city5thread,NULL, 0, NULL);

	WaitForMultipleObjects(5, thread,true,NULL);
	fflush(stdout);
    cout<< " votes for a "<<a<<endl;
	cout<< " votes for b "<<b<<endl;
	cout<< " votes for c "<<c<<endl;
	cout<<"summa golosov"<<a+b+c<<endl;

};


DWORD WINAPI city1thread(LPVOID t)
{
  for (int t=0;t<500;t++)
{
    int random_x;
    random_x = rand() % 3+1;
  //  cout<<"\nCity 1 votes for X = "<<random_x;
	
	if (random_x == 1)
	{
			a++;
	}
	if (random_x == 2)
	{
			b++;
	}
	if (random_x == 3)
	{
			c++;
	}
	

} 
  return 0;
}

DWORD WINAPI city2thread(LPVOID t)
{
	  for (int t=0;t<500;t++)
{
    int random_x;
    random_x = rand() % 3+1;
//    cout<<"\nCity 2 votes for X = "<<random_x;

		if (random_x == 1)
	{
			a++;
	}
	if (random_x == 2)
	{
			b++;
	}
	if (random_x == 3)
	{
			c++;
	}
} 
	   return 0;
}

DWORD WINAPI city3thread(LPVOID t)
{
	  for (int t=0;t<500;t++)
{
    int random_x;
    random_x = rand() % 3+1;
 //   cout<<"\nCity 3 votes for X = "<<random_x;

		if (random_x == 1)
	{
			a++;
	}
	if (random_x == 2)
	{
			b++;
	}
	if (random_x == 3)
	{
			c++;
	}
} 
	   return 0;
    

}

DWORD WINAPI city4thread(LPVOID t)
{
	
      for (int t=0;t<500;t++)
{
    int random_x;
    random_x = rand() % 3+1;
 //   cout<<"\nCity 4 votes for X = "<<random_x;

		if (random_x == 1)
	{
			a++;
	}
	if (random_x == 2)
	{
			b++;
	}
	if (random_x == 3)
	{
			c++;
	}
} 
	   return 0;

}

DWORD WINAPI city5thread(LPVOID t)
{
	
      for (int t=0;t<500;t++)
{
    int random_x;
    random_x = rand() % 3+1;
 //   cout<<"\nCity 5 votes for X = "<<random_x;

		if (random_x == 1)
	{
			a++;
	}
	if (random_x == 2)
	{
			b++;
	}
	if (random_x == 3)
	{
			c++;
	}
} 
	   return 0;

}

