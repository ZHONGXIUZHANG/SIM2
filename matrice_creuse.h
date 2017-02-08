#ifndef MATRICE_CREUSE_H_INCLUDED
#define MATRICE_CREUSE_H_INCLUDED

#include<iostream>
#include <vector>
#include <cassert>
#include"noeud.h"

using namespace std;

class Matrice_creuse
{
    private :
        int nbLi, nbCo;

    public:
        vector<Noeud> Chaine;
        Matrice_creuse(const int & l= 0, const int & c=0);
        void print();
        int Li() const;
        int Co() const;
        const vector<Noeud> & get_Chaine() const {return Chaine;};

    friend vector<double> operator*(const Matrice_creuse M, const vector<double> &V);
    // RAJOUTER LE CONST ??


};

/// Operateurs sur les vecteurs ///
vector<double> operator+(vector<double> a, vector<double> b); // Addition des vector<double>
vector<double> operator-(vector<double> a);                   // Operateur unaire de l'oppos¨¦
vector<double> operator-(vector<double> a, vector<double> b); // Soustraction pour les vecteurs a-b NON SYMETRIQUE
vector<double> operator*(double a, vector<double> X);         // multiplication par un scalaire
double ps(vector<double> x, vector<double> y);                // Produit scalaire


#endif // MATRICE_CREUSE_H_INCLUDED
