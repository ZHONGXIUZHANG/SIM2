#include<iostream>
#include "matrice_creuse.h"

/// IMPLEMENTATION EXTERNE DES FONCTIONS ///

// CONSTRUCTEUR //

Matrice_creuse :: Matrice_creuse(const int &l, const int & c)
{
    cout << "const Matrice_creuse dim" << endl;
    nbLi = l;
    nbCo = c;
}

void Matrice_creuse :: print()
{
    vector<Noeud> :: iterator it;

    for(it=Chaine.begin(); it !=Chaine.end(); it++)
    {
        it->print();
    }
}

int Matrice_creuse :: Li() const
{
    return nbLi;
}

int Matrice_creuse :: Co() const
{
    return nbCo;
}

vector<double> operator*(const Matrice_creuse M, const vector<double>& V)
{
    assert(M.Co() == V.size());

    vector<double> res(M.Li()) ;
    const vector<Noeud> & Chaine = M.get_Chaine();
    vector<Noeud> :: const_iterator it;
    int i,j;

    for(it = Chaine.begin(); it != Chaine.end(); it++)
    {
        i = it->li();
        j = it->co();
        res.at(i) += (it->val())*V.at(j);
    }

    return res;
}

/// OPERATEURS SUR LES VECTEURS

vector<double> operator+(vector<double> a, vector<double> b)
// Addition
{
    assert(a.size() == b.size());
    unsigned int n = a.size();
    vector<double> res = a;

    for(int i=0;i<n;i++)
        res.at(i) += b.at(i);

    return res;
}

vector<double> operator-(vector<double> a)
// Operzteur unaire de l'oppos¨¦
{
    vector<double> res(a.size());
    for (int i=0; i < a.size();i++)
        res.at(i)=-a.at(i);

    return res;
}

vector<double> operator-(vector<double> a, vector<double> b)
// Soustraction
{
    return a + (-b);
}

vector<double> operator*(double a, vector<double> X)
{
    vector<double> res(X.size());
    for(int i=0; i<X.size(); i++)
        res.at(i)=a*X.at(i);

    return res;
}

double ps(vector<double> x, vector<double> y)
// Produit scalaire
{
    assert(x.size()==y.size());
    double res =0.;

    for(int i=0; i<x.size(); i++)
        res+= x.at(i)*y.at(i);

    return res;
}
