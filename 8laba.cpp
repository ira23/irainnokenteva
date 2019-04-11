// 8laba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

class Employee;

class Department 
{
private:
	string name;
    Employee *head;

public:
       void setName(string newname); 
	   string getname();
	   void setHead (Employee *newHead );
	   Employee *getHead();
	   void print();
};

void Department::setName(string newname)
{
	this->name=newname;
}

string Department::getname()
{
	return this->name;
}

void Department::setHead(Employee *newHead)
{
	this->head=newHead;
}

Employee* Department::getHead()
{
	return head;
}




class idCard
{
private:
	int number;
	string dateExpire;
public:
       void setNumber(int newNumber); 
	   int getNumber();
	   void setDateExpire (string newDateExpire);
	   string getDateExpire();
	   void print();
};

void idCard::setNumber(int newNumber)
{
	this->number=newNumber;
}

int idCard::getNumber()
{
	return this->number;
}

void idCard::setDateExpire(string newDateExpire)
{
	this->dateExpire=newDateExpire;
}


string idCard::getDateExpire()
{
	return this->dateExpire;
}

void idCard::print()
{
	cout<<" idCard: "<<this->number;

}


class Employee 
{
private:
	string position;
    idCard *card;
	int room;
	Department *deparnment;

public:
       void setPosition(string newPosition); 
	   string getPosition();
	   void setidCard (idCard *newidCard);
	   idCard *getidCard();
	   void setRoom (int newRoom);
	   int getRoom();
	   void setDepartment (Department *newDepartment);
	   Department *getDepartment();
	   void print();
};


void Employee::setPosition(string newPosition)
{
	this->position=newPosition;
}

string Employee::getPosition()
{
	return this->position;
}

void Employee::setidCard (idCard *newidCard)
{
	card=newidCard;
	return;
}

idCard* Employee::getidCard()
{
	return card;
}

void Employee::setRoom (int newRoom)
{
	room=newRoom;
	return;
}

int Employee::getRoom ()
{
	return room;
}

void Employee::setDepartment (Department *newDepartment)
{
	deparnment=newDepartment;
	return;
}

Department* Employee::getDepartment()
{
	return deparnment;
}


void Employee::print()
{
	cout<<" Employee: "<<this->position;
	cout<<"\n Employee: "<<this->room;
	cout<<"\n Dep:"<<this->deparnment->getname();
}

void Department::print()
{
	cout<<" Department: "<<this->name;
	cout<<"\n glava: \n";
	this->head->print();
}

int _tmain(int argc, _TCHAR* argv[])
{
	Department razrabotka, administraziya;

	Employee Ivan, Petre, Sidor, Mikhail, Alexsandra, Evgeniya;
	razrabotka.setName("Department razrabotka ");
	razrabotka.setHead(&Ivan);
	administraziya.setName("Department administraziya ");
	administraziya.setHead(&Mikhail);

	Ivan.setPosition("Glava Department");
	Ivan.setDepartment(&razrabotka);
	Ivan.setRoom(101);

	Petre.setPosition("Glavnuy razrabotchik");
	Petre.setDepartment(&razrabotka);
	Petre.setRoom(102);

	Sidor.setPosition("razrabotchik");
	Sidor.setDepartment(&razrabotka);
	Sidor.setRoom(102);

	Mikhail.setPosition("Director");
    Mikhail.setDepartment(&administraziya);
	Mikhail.setRoom(201);

	Alexsandra.setPosition("Zamestitel Director");
    Alexsandra.setDepartment(&administraziya);
	Alexsandra.setRoom(201);

	Evgeniya.setPosition("Glavnuy Bulgakter");
    Evgeniya.setDepartment(&administraziya);
	Evgeniya.setRoom(201);

	razrabotka.print();
	administraziya.print();

	system  ("pause");


	return 0;
}

