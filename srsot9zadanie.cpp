// srsot9zadanie.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


class Money
{
private:
	long rubly;
	unsigned char kopeek;

public:
       void setMoney(long newrubly, unsigned char newkopeek);
	   long getRubly();
	   unsigned char getKopeek();
	   Money operator+(Money &plusMoney);
	   Money operator-(Money &minusMoney);
	   Money operator*(const int &mulMoney);
	   void print();
};

void Money::setMoney(long newrubly, unsigned char newkopeek)
{
	this->rubly=newrubly;
	this->kopeek=newkopeek;
}

long Money::getRubly()
{
	return this->rubly;
}

unsigned char Money::getKopeek()
{
	return this->kopeek;
}

Money Money::operator+(Money &plusMoney)
{
	Money result;
	result.rubly=this->rubly+plusMoney.rubly;
	result.kopeek=this->kopeek+plusMoney.kopeek;

	if (result.kopeek >= 100)
	{
		result.kopeek=(result.kopeek-100);
		result.rubly=(result.rubly+1);  
	}
	
	return result;
}

Money Money::operator-(Money &minusMoney)
{
	Money result;
	result.rubly=this->rubly-minusMoney.rubly;
	int i;
	i=this->kopeek-minusMoney.kopeek;

	if (i < 0)
	{
		result.rubly=result.rubly-1;
		result.kopeek=i+100;
	}
	else
	{
		result.kopeek=this->kopeek-minusMoney.kopeek;
	}

	return result;
}

Money Money::operator*(const int &mulMoney)
{
	Money result;
	result.rubly=this->rubly*mulMoney;
	result.kopeek=this->kopeek*mulMoney;

	while (result.kopeek >= 100)
	{
		result.kopeek=(result.kopeek-100);
		result.rubly=(result.rubly+1);  
	}

	return result;

}

 void Money::print()
 {
	 cout << rubly << "," << (int)kopeek << endl;
 }


int _tmain(int argc, _TCHAR* argv[])
{
    Money a,b,c;
	a.setMoney(1,30);
	b.setMoney(2,70);
	c=a+b;
	c.print();

	a.setMoney(5,30);
	b.setMoney(1,40);
	c=a-b;
	c.print();

	a.setMoney(2,30);
	int d =10;
	c=a*d;
	c.print();
	
	
	system("pause");	
}
	

