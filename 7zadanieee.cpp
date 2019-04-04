// 7zadanieee.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"



using namespace std;


class spell 
{
public:
	string name;
	int dhp;
	int dmp;
};


class mage
{
private:
    int hp;
    int mp;
    string name;

public:
       void init(int newhp , int newmp, string newname); 
	   string getname();
	   void say (string text);
	   int cast (spell & spl, mage & target);
	   void hit (spell & spl);
};

void mage::init(int newhp , int newmp, string newname)
{
	this->hp=newhp;
	this->mp=newmp;
	this->name=newname;
}

string mage::getname()
{
	return this->name;
}


void mage::say(string text)
{
  cout << this->name << "say " << text; 
  return;
}

int mage::cast(spell & spl, mage & target)
{
	cout << this->name << " hits with " << spl.name << " bad guy " << target.getname() << endl;
	target.hit(spl);
	return 0;
	
}

void mage::hit(spell & spl)
{
	this->hp=this->hp - spl.dhp;
    
	if (hp < 0)
		this-> say ("proigral");

    return;
}



int _tmain(int argc, _TCHAR* argv[])
{
	spell bolt, drain;

	bolt.dhp = 200;
	bolt.dmp = 20;
	bolt.name= "Ligthing bolt";

	drain.dhp = 123;
	drain.dmp = 456;
	drain.name = "Udar Molota";

	mage vanya, boris;

	vanya.init(300, 1000, "vanyamag");
	boris.init(300, 500, "borismag");

	vanya.cast(drain, boris);
	boris.cast(bolt, vanya);
	vanya.cast(drain, boris);
	boris.cast(bolt, vanya);
	vanya.cast(drain, boris);
	boris.cast(bolt, vanya);

	system("pause");

	return 0;
}

