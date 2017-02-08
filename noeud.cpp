#include<iostream>
#include"noeud.h"

using namespace std;

void Noeud :: print()
{
    cout << "[" << Li << "," << Co << ",Val="<< Val << "]" << endl;
}

int & Noeud :: li()
{
    return Li;
}

int & Noeud :: co()
{
    return Co;
}


int Noeud :: li() const
{
    return Li;
}

int Noeud :: co() const
{
    return Co;
}
double & Noeud :: val()
{
     return Val;
}

double Noeud :: val() const
{
     return Val;
}
