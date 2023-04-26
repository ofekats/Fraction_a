#include "Fraction.hpp"
#include <iostream>
#include <stdio.h>

using namespace ariel;
using namespace std;

Fraction::Fraction(int a, int b){
}
// operators
Fraction& Fraction::operator+(const Fraction& frac){
    return *this;
}

Fraction& Fraction::operator+(const float flo){
    return *this;
}

Fraction& Fraction::operator-(const Fraction& frac){
    return *this;
}

Fraction& Fraction::operator-(const float flo){
    return *this;
}

Fraction& Fraction::operator/(const Fraction& frac){
    return *this;
}

Fraction& Fraction::operator/(const float flo){
    return *this;
}

Fraction& Fraction::operator*(const Fraction& frac){
    return *this;
}

Fraction& Fraction::operator*(const float flo){
    return *this;
}

bool Fraction::operator==(const Fraction& frac){
    return true;
}

bool Fraction::operator==(const float flo){
    return true;
}

bool Fraction::operator>(const Fraction& frac){
    return true;
}

bool Fraction::operator>(const float flo){
    return true;
}

bool Fraction::operator<(const Fraction& frac){
    return true;
}

bool Fraction::operator<(const float flo){
    return true;
}

bool Fraction::operator>=(const Fraction& frac){
    return true;
}

bool Fraction::operator>=(const float flo){
    return true;
}

bool Fraction::operator<=(const Fraction& frac){
    return true;
}

bool Fraction::operator<=(const float flo){
    return true;
}

Fraction& Fraction::operator++(){
    return *this;
}

Fraction& Fraction::operator++(int) // postfix
{
    return *this;
}

Fraction& Fraction::operator--(){
    return *this;
}

Fraction& Fraction::operator--(int) // postfix
{
    return *this;
}


//friends
ostream& ariel::operator<<(ostream &stream, Fraction const& frac){
    return stream;
}
istream& ariel::operator>>(istream &stream, Fraction const& frac){
    return stream;
}
// float options
Fraction& ariel::operator+(float flo,Fraction& frac){
    return frac;
}

Fraction& ariel::operator-(float flo, Fraction& frac){
    return frac;
}

Fraction& ariel::operator/(float flo, Fraction& frac){
    return frac;
}

Fraction& ariel::operator*(float flo, Fraction& frac){
    return frac;
}

bool ariel::operator==(float flo, Fraction& frac){
    return true;
}

bool ariel::operator>(float flo, Fraction& frac){
    return true;
}

bool ariel::operator<(float flo, Fraction& frac){
    return true;
}

bool ariel::operator>=(float flo, Fraction& frac){
    return true;
}

bool ariel::operator<=(float flo, Fraction& frac){
    return true;
}


