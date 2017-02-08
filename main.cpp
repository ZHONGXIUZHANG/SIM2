#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <cmath>
#include"noeud.h"
#include"matrice_creuse.h"
#include"trin.h"

using namespace std;



int main()
{
    Noeud N0(0,0,1.);
    Noeud N1(1,1,2.);
        Noeud N2(2,2,3.);

        Matrice_creuse M(3,3);
        M.Chaine.push_back(N0);
        M.Chaine.push_back(N1);
        M.Chaine.push_back(N2);

        M.print();
        cout << "fin print" << endl;
        vector<double> V(3);
        vector<double> R(3);
        V.at(0) = 2.;
        V.at(1) = 3.;
        V.at(2) = 4.;
        cout << "ok" << endl;
        R = M*V;
        cout <<"Res : "<< R.at(0) << "," << R.at(1) << "," << R.at(2) << endl;

    Point n1(0,0);
    Point n2(1,0);
    Point n3(0,1);
    Triinte ti(n1,n2,n3);
    ti.masse();
    ti.rigid();

    cout << "It runs!" << endl;
    return 0;
}

