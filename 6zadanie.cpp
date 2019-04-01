// 6zadanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

// класс книга
class book
{
private:
   std::string name;
   int year;
public:
	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};

   void book::set_name(const char * new_name)
{
   this->name=new_name;
   return;
}

void book::set_year(const int new_year)
{
   this->year=new_year;
   return;
}
void book::get_info()
{
   cout<< this->name << "(" << this->year <<")";
   return;
}


//класс читатель

class Chitatel
{
private:
	string name;
	int age;
public:
	book idorbook;
	void set_name(const char * new_name);
	void set_age(const int new_age);
	void get_info();
};

void Chitatel::set_name(const char * new_name)
{
   this->name=new_name;
   return;
}

void Chitatel::set_age(const int new_age)
{
   this->age=new_age;
   return;
}
void Chitatel::get_info()
{
   cout<< this->name << "(" << this->age<<")";
   idorbook.get_info();
   return;
}


int _tmain(int argc, _TCHAR* argv[])
{
	book x;							//class book
	x.set_name (" Voyna i mir ");
    x.set_year (1869);
	x.get_info();
	system("PAUSE");

	book y;
	y.set_name (" Vlastelin kolez ");
	y.set_year (2002);
	y.get_info();
	system("PAUSE");

	book z;
	z.set_name (" Garry potter i philosophskiy kamen ");
	z.set_year (2002);
	z.get_info();

	system("PAUSE");

	


	Chitatel l;				//class chiteteli
	l.set_name ("Innokenteva Irina Vladimirovna ");
	l.set_age (23);
	l.idorbook = z;
	l.get_info();
	system("PAUSE");

	Chitatel k;				
	k.set_name ("Ivanov Ivan Ivanovich ");
	k.set_age (13);
	k.idorbook = y;
	k.get_info();
	system("PAUSE");

	Chitatel i;				
	i.set_name ("Vasikiev Vasiliy Vasilievich ");
	i.set_age (18);
	i.idorbook = x;
	i.get_info();
	system("PAUSE");


	return 0;
}

