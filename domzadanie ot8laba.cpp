// domzadanie ot8zadanie.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

class Money 
{
private:
	int rubley;
	unsigned char kopeek;
   
public:
       void setRubley(int newRubley); 
	   void setKopeek(int newKopeek); 
	   int getRubley();
	   unsigned char getKopeek();
	   void addMoney(Money &someMoney);
	   void withdrawMoney(Money &someMoney);
	   void print();
};

void Money::setRubley(int newRubley)
{
	this->rubley=newRubley;
}

void Money::setKopeek(int newKopeek)
{
	this->kopeek=newKopeek;
}

int Money::getRubley()
{
	return this->rubley;
}

unsigned char Money::getKopeek()
{
	return this->kopeek;
}

void Money::addMoney(Money &someMoney)
{
	this->rubley+=someMoney.rubley;
	this->kopeek+=someMoney.kopeek;
}

void Money::withdrawMoney(Money &someMoney)
{
	this->rubley-=someMoney.rubley;
	this->kopeek-=someMoney.kopeek;
}

void Money::print()
{
	cout << rubley << "," << kopeek << endl;
}



int _tmain(int argc, _TCHAR* argv[])
{
	Money a, b;
	int x, y, z, s;
	cout<<"Vvedite a.money";
	cin>>x;
	a.setRubley(x);

	cout<<"Vvedite a.kopeek";
	cin>>y;
	a.setKopeek(y);

	cout<<"Vvedite b.money";
	cin>>z;
	b.setRubley(z);

	cout<<"Vvedite b.kopeek";
	cin>>s;
	b.setKopeek(s);

	cout << "\nSumma: " << a.getRubley()+b.getRubley()<< ","<< a.getKopeek()+b.getKopeek()<< endl;
	cout << "\nRaznost: " << a.getRubley()-b.getRubley()<< ","<< a.getKopeek()-b.getKopeek()<< endl;
	system ("pause");
	return 0;
}

