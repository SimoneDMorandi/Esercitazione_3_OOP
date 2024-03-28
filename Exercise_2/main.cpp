// Includo l'header
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    // Definisco l'alias per i numeri complessi
    typedef ComplexNumber C;

    // Definisco alcuni valori arbitrari di parti reali e
    // immaginarie per testare la struttura.

    double re = 3.0;
    double im = 2.0;
    double null = 1e-17;
    C z1(re,im);
    C z2(re,-2*im);
    C z3(re,null);
    C z4(null,im);
    C z5(null,-im);
    C Null(null,null);

//Eseguo alcuni output per verificare la correttezza della struttura

    // Stampa di tutti i possibili casi di parte reale e immaginaria
    cout <<"z1 = "<< z1 <<"\n";
    cout <<"z2 = "<< z2 <<"\n";
    cout <<"z3 = " << z3 <<"\n";
    cout << "z4 = "<< z4 <<"\n";
    cout << "z5 = " << z5 <<"\n";
    cout << "Zero = "<< Null <<"\n";

    // Stampa di una somma
    cout << "z1+z2 = " << z1 + z2 <<"\n";

    // Stampa di confronti fra numeri complessi
    bool F = z1 == z2;
    cout <<"z1 != z2: " << boolalpha << F <<"\n";
    C z1_eps(re+null,im+null);
    bool T = z1==z1_eps;
    cout <<"z1 == z1_eps:  " << boolalpha << T <<"\n";

    // Stampa di numeri complessi coniugati
    cout << "Il coniugato di "<< z1 << " -> " << conjugate(z1)<<"\n";
    cout << "Il coniugato di " << z2 << " -> " << conjugate(z2)<<"\n";
    cout << "Il coniugato di " << z3 << " -> " << conjugate(z3)<<"\n";
    cout << "Il coniugato di " << z4 << " -> " << conjugate(z4)<<"\n";
    return 0;
}
