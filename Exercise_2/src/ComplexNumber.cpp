#include <iostream>
#include <limits>
#include <cmath>

#include "ComplexNumber.hpp"

using namespace std;

// Corpo dell'operatore di output
ostream& operator<<(ostream& os, const ComplexNumber& z)
{
    double epsilon = std::numeric_limits<double>::epsilon();
    // Im nulla
    if(abs(z.imaginary_part) < epsilon){
        // Im nulla, Re nulla
        if(abs(z.real_part) < epsilon)
        {
            os << 0;
        }
        // Im nulla, Re macchina
        else{
            os << z.real_part;
        }
    }
    // Im positiva
    else if(z.imaginary_part > 0){
        // Im positiva, Re nulla
        if(abs(z.real_part) < epsilon){
            os << "+" << z.imaginary_part << "i";
        }
        // Im positiva, Re macchina
        else{
            os << z.real_part << "+" << z.imaginary_part << "i";
        }
    }
    // Im negativa
    else{
        // Im negativa, Re nulla
        if(abs(z.real_part) < epsilon){
            os << z.imaginary_part << "i";
        }
        // Im negativa, Re macchina
        else{
            os << z.real_part << z.imaginary_part << "i";
        }
    }
    return os;
}

// Corpo dell'operatore di somma
ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2)
{
    double re =  z1.real_part + z2.real_part;
    double im = z1.imaginary_part + z2.imaginary_part;
    ComplexNumber z(re,im);
    return z;
}

// Corpo dell'operatore di uguaglianza
bool operator==(const ComplexNumber& z1, const ComplexNumber& z2)
{
    double epsilon = std::numeric_limits<double>::epsilon();
    if (abs(z1.real_part - z2.real_part) < epsilon && abs(z1.imaginary_part - z2.imaginary_part) < epsilon) {
        return true;
    } else {
        return false;
    }
}

// Corpo della funzione di coniugazione
ComplexNumber conjugate(const ComplexNumber& z)
{
    double epsilon = std::numeric_limits<double>::epsilon();
    if(abs(z.imaginary_part) < epsilon){
        return ComplexNumber(z.real_part,0);
    }
    else{
        return ComplexNumber(z.real_part,-z.imaginary_part);
    }
}
