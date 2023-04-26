#pragma once

#include <iostream>
using namespace std;

namespace ariel
{
    class Fraction
    {
    public:
        Fraction(int a=1, int b=1);
        //operators
        Fraction& operator+(const Fraction& frac);
        Fraction& operator+(const float flo);
        Fraction& operator-(const Fraction& frac);
        Fraction& operator-(const float flo);
        Fraction& operator/(const Fraction& frac);
        Fraction& operator/(const float flo);
        Fraction& operator*(const Fraction& frac);
        Fraction& operator*(const float flo);
        bool operator==(const Fraction& frac);
        bool operator==(const float flo);
        bool operator>(const Fraction& frac);
        bool operator>(const float flo);
        bool operator<(const Fraction& frac);
        bool operator<(const float flo);
        bool operator>=(const Fraction& frac);
        bool operator>=(const float flo);
        bool operator<=(const Fraction& frac);
        bool operator<=(const float flo);
        Fraction& operator++();
        Fraction& operator++(int); //postfix
        Fraction& operator--();
        Fraction& operator--(int); //postfix

        //friends
        friend ostream& operator<<(ostream& stream, const Fraction& frac);
        friend istream& operator>>(istream& stream, const Fraction& frac);
        //float options
        friend Fraction& operator+(float flo, Fraction& frac);
        friend Fraction& operator-(float flo, Fraction& frac);
        friend Fraction& operator/(float flo, Fraction& frac);
        friend Fraction& operator*(float flo, Fraction& frac);
        friend bool operator==(float flo, Fraction& frac);
        friend bool operator>(float flo, Fraction& frac);
        friend bool operator<(float flo, Fraction& frac);
        friend bool operator>=(float flo, Fraction& frac);
        friend bool operator<=(float flo, Fraction& frac);

    private:
        int _numerator;
        int denominator;
    };
}