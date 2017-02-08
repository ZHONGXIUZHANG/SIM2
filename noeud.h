#ifndef NOEUD_H_INCLUDED
#define NOEUD_H_INCLUDED

class Noeud
{
    private:
        int Li,Co;
        double Val;

    public:
        Noeud(const int & l=0, const int & c =0, const double & v=0.) : Li(l),Co(c),Val(v) {}
        int & li();
        int & co();
        int li() const;
        int co() const;
        double & val();
        double val() const;

        void print();

};


#endif // NOEUD_H_INCLUDED
