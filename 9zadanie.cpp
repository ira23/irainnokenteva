// 9zadanie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;


class Time
{
private:
	long hours;
	unsigned char minutes;

public:
       void setTime(long newHours, unsigned char newMinutes);
	   long getHours();
	   unsigned char getMinutes();
	   Time operator+(Time &plusTime);
	   Time operator-(Time &minusTime);
	   Time operator*(const int &mulTime);
	   void print();
};

void Time::setTime(long newHours, unsigned char newMinutes)
{
	this->hours=newHours;
	this->minutes=newMinutes;
}

long Time::getHours()
{
	return this->hours;
}

unsigned char Time::getMinutes()
{
	return this->minutes;
}

Time Time::operator+(Time &plusTime)
{
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;

	if (result.minutes >= 60)
	{
		result.minutes=(result.minutes-60);
		result.hours=(result.hours+1);  
	}
	
	return result;
}

Time Time::operator-(Time &minusTime)
{
	Time result;
	result.hours=this->hours-minusTime.hours;
	int i;
	i=this->minutes-minusTime.minutes;

	if (i < 0)
	{
		result.hours=result.hours-1;
		result.minutes=i+60;
	}
	else
	{
	   result.minutes=this->minutes-minusTime.minutes;
	}

	return result;
}

Time Time::operator*(const int &mulTime)
{
	Time result;
	result.hours=this->hours*mulTime;
	result.minutes=this->minutes*mulTime;

	while (result.minutes >= 60)
	{
		result.minutes=(result.minutes-60);
		result.hours=(result.hours+1);  
	}

	return result;

}

 void Time::print()
 {
	 cout << hours << " " << (int)minutes << endl;
 }


int _tmain(int argc, _TCHAR* argv[])
{
    Time a,b,c;
	a.setTime(2,30);
	b.setTime(2,30);
	c=a+b;
	c.print();

	a.setTime(2,30);
	b.setTime(0,40);
	c=a-b;
	c.print();

	a.setTime(2,30);
	int d =3;
	c=a*d;
	c.print();
	
	




	system("pause");	
}
	

