// 14zadDomashka1.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
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

int word1, word2, Sheshe, Sheshe2;
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
	cout<< " Vsego slov She i she v dune "<<Sheshe<<endl;
	cout<< " Vsego slov She i she v katerina "<<Sheshe2<<endl;

};

DWORD WINAPI dz14_dunethread(LPVOID)
{
  std::ifstream fin1("dz14_dune.txt", std::ios::in|std::ios::_Nocreate);
  while (fin1 >> buffer1) ++word1;
  if (buffer1 == "She" || buffer1 == "she") ++Sheshe;
  return 0;
}



DWORD WINAPI dz14_kareninathread(LPVOID)
{
 std::ifstream fin2("dz14_karenina.txt", std::ios::in|std::ios::_Nocreate);
 while(fin2 >> buffer2) ++word2;
 if (buffer2 == "She" || buffer2 == "she") ++Sheshe2;
 return 0;
}




