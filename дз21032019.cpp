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
 
    static void Add(Fraction a,Fraction b){
        cout << "\nSumma: " << a.pervuy+b.pervuy << "."<< a.vtoroy+b.vtoroy << endl;
    }
 
    static void Sub(Fraction a,Fraction b){
        cout << "Raznost: " << a.pervuy-b.pervuy << "." << a.vtoroy-b.vtoroy << endl;
    }
 
    static void Mul(Fraction a,Fraction b){
        cout << "Ymnozhenie: " << a.pervuy*b.pervuy << "." << a.vtoroy*b.vtoroy << endl;
    }
 
    static void Equal(Fraction a,Fraction b){
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
    A.Add(N,M);
    A.Sub(N,M);
    A.Mul(N,M);
    A.Equal(N,M);
    system ("pause");
    return 0;
}
