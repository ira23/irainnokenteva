// 14zaad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>   
#include <windows.h> 
#include <conio.h>  


using namespace std;

DWORD WINAPI thread2(LPVOID);
 
int i;

int _tmain(int argc, _TCHAR* argv[])
{
	
	HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);

	while (true)
	{
	if (i=1)
	{
		i=-1;
	}
	else
	{
		i=1;
	}
	}
	_getch();
	return 0;

}

DWORD WINAPI thread2(LPVOID t)
{
	
    while (true)
	{
		cout<<i<<endl;
	}
	return 0;

}

