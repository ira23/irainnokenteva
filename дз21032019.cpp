// дз21032019.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
 
using namespace std;
 
class Fraction {
 
protected:
long pervuy;
unsigned short vtoroy;
 
public:
    Fraction() {
        pervuy=0;
        vtoroy=0;
    }
 
    void init(long p,unsigned short v) {
        pervuy=p;
        vtoroy=v;
    }
        
    void read() {
        cout << "\nCelaya chast': "; cin >> pervuy;
        cout << "Drobnaya chast': "; cin >> vtoroy;
    }
 
    void display(){
        cout << pervuy << "." << vtoroy << endl;
    }
 
    static void Sum(Fraction a,Fraction b){
        cout << "\nSumma: " << a.pervuy+b.pervuy << "."<< a.vtoroy+b.vtoroy << endl;
    }
 
    static void Raz(Fraction a,Fraction b){
        cout << "Raznost: " << a.pervuy-b.pervuy << "." << a.vtoroy-b.vtoroy << endl;
    }
 
    static void Ymn(Fraction a,Fraction b){
        cout << "Ymnozhenie: " << a.pervuy*b.pervuy << "." << a.vtoroy*b.vtoroy << endl;
    }
 
    static void Ravn(Fraction a,Fraction b){
        if(a.pervuy==b.pervuy && a.vtoroy==b.vtoroy)
            { 
                cout << "Ravnu" << endl;
            }
        else {
            if((a.pervuy-b.pervuy)>0){
                cout << "Chislo 1 > Chislo 2\n\n";
            }
            else {
                cout << "Chislo 1 < Chislo 2\n\n";
            }
        }
    };
    };
 
int main()
{
    Fraction N, M, A;
    N.read();
    cout << "\nChislo 1: ";
    N.display();
    M.read();
    cout << "\nChislo 2: ";
    M.display();
    A.Sum(N,M);
    A.Raz(N,M);
    A.Ymn(N,M);
    A.Ravn(N,M);
    system ("pause");
    return 0;
}
