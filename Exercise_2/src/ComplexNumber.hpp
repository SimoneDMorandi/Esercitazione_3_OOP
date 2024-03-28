#ifndef COMPLEXNUMBER_HPP
#define COMPLEXNUMBER_HPP

#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

// Definisco la struttura
struct ComplexNumber
{
    double real_part;
    double imaginary_part;

    // Mantengo il costruttore di default
    ComplexNumber() = default;
    // Definisco il costruttore personalizzato
    ComplexNumber(double a, double b)
    {
        real_part = a;
        imaginary_part = b;
    }
};

// Definisco l'operatore di stampa
ostream& operator<<(ostream& os, const ComplexNumber& z);

// Definisco l'operatore di somma
ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2);

// Definisco l'operatore di uguaglianza
bool operator==(const ComplexNumber& z1, const ComplexNumber& z2);

// Definisco la funzione di coniugazione
ComplexNumber conjugate(const ComplexNumber& z);

#endif
