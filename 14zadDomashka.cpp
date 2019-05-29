// 14zadDomashka1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>   
#include <windows.h> 
#include <stdio.h>
#include <conio.h>  
#include "string"


using namespace std;

DWORD WINAPI dz14_dunethread(LPVOID);
DWORD WINAPI dz14_kareninathread(LPVOID);

int word1, word2;
string buffer1, buffer2;

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE thread[2];

	word1 = 0;
	word2 = 0;

	thread[0]	= CreateThread(NULL,0,dz14_dunethread,NULL, 0, NULL);
	thread[1]	= CreateThread(NULL,0,dz14_kareninathread,NULL, 0, NULL);

	WaitForMultipleObjects(2, thread,true,INFINITE);
    cout<< " Vsego slov "<<word1<<endl;
	cout<< " Vsego slov "<<word2<<endl;
	cout<< " Summa Vsego slov "<<word2+word1<<endl;
};

DWORD WINAPI dz14_dunethread(LPVOID)
{
  std::ifstream fin1("dz14_dune.txt", std::ios::in|std::ios::_Nocreate);
  while (fin1 >> buffer1) ++word1; 
  return 0;
}



DWORD WINAPI dz14_kareninathread(LPVOID)
{
 std::ifstream fin2("dz14_karenina.txt", std::ios::in|std::ios::_Nocreate);
 while(fin2 >> buffer2) ++word2;
 return 0;
}




