// 10zadanie.cpp : Defines the entry point for the console application.
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
	   bool operator < (Time &minusTime);
	   bool operator > (Time &minusTime);
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

bool Time::operator< (Time &minusTime)
{
	
	if (this->hours < minusTime.hours) return true;
	else return false; 		
}

bool Time::operator > (Time &minusTime)
{
	if (this->hours > minusTime.hours) return true;
	else return false; 	
}


 void Time::print()
 {
	 cout << hours << " " << (int)minutes << endl;
 }


int _tmain(int argc, _TCHAR* argv[])
{
	Time x,y;
	x.setTime(3,10);
	y.setTime(2,10);
	bool b2 = x > y;
    std::cout << b2 << std::endl;

	x.setTime(1,10);
	y.setTime(0,10);
	bool b3 = x < y;
    std::cout << b3 << std::endl;

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
	
	Time *ira, idor;
	cout<<"Sortirovka"<<endl;
	ira = new Time[10];
	ira[0].setTime(2,50);
	ira[1].setTime(1,50);
	ira[2].setTime(8,50);
	ira[3].setTime(3,02);
	ira[4].setTime(7,30);
	ira[5].setTime(4,50);
	ira[6].setTime(7,50);
	ira[7].setTime(5,20);
	ira[8].setTime(0,50);
	ira[9].setTime(15,50);

	 for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (ira[j] > ira[j + 1]) {
                // меняем элементы местами
                idor = ira[j];
                ira[j] = ira[j + 1];
               ira[j + 1] = idor;
            }
        }
    }

    // Вывод отсортированного массива на экран
    for (int i = 0; i < 10; i++) {
		ira[i].print();
    }
    cout << endl;


	system("pause");
}







