// шоколадка.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class choko
{
public:
string name;
int weight;
bool with_nuts;
};

int _tmain(int argc, _TCHAR* argv[])
{
	class choko x,  y, z;
	x.name = "mars";
	x.weight=23;
	x.with_nuts=0;
	y.name = "twix";
	y.weight=15;
	y.with_nuts=0;
	z.name = "snikers";
	z.weight=10;
	z.with_nuts=1;

	cout << "name: " << x.name;
	cout << " ves: " << x.weight;
	if (x.with_nuts = 1) cout << " s orehami" ; else cout << "bez  orehami";
	
	system ("pause");

	cout << "name: " << y.name;
	cout << " ves: " << y.weight;
	if (y.with_nuts = 1) cout << " s orehami" ; else cout << "bez  orehami";
	system ("pause");

	cout << "name: " << z.name;
	cout << " ves: " << z.weight;
	if (z.with_nuts = 1) cout << " s orehami" ; else cout << "bez  orehami";
	system ("pause");
}

