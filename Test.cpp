#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;


TEST_CASE("cant create a Fraction with denominator==0") {
    CHECK_THROWS(Fraction(1,0));
}

TEST_CASE("operator+ Fractions only") {
    //create 3 new fractions
    Fraction a(1,2);
    Fraction b(3,2);
    Fraction c(2,1);
    //checks if a+b equal c
    CHECK((a+b)==c);
    CHECK((a+b)==2.0);
}

TEST_CASE("operator+ Fractions and float") {
    //create 2 new fractions and one float
    Fraction a(1,2);
    float b= 1.5;
    Fraction c(2,1);
    //checks if a+b equal c
    CHECK((a+b)==c);
    CHECK((a+b)==2.0);
    CHECK((b+a)==c);
}

TEST_CASE("operator- Fractions only") {
    //create 3 new fractions
    Fraction a(1,2);
    Fraction b(1,2);
    Fraction c(0,1);
    //checks if a-b equal c
    CHECK((a-b)==c);
    CHECK((a-b)==0.0);
}

TEST_CASE("operator- Fractions and float") {
    //create 2 new fractions and one float
    Fraction a(1,2);
    float b= 0.5;
    Fraction c(0,1);
    //checks if a-b equal c
    CHECK((a-b)==c);
    CHECK((a-b)==0.0);
    CHECK((b-a)==c);
}

TEST_CASE("operator/ Fractions only") {
    //create 3 new fractions
    Fraction a(1,2);
    Fraction b(1,1);
    Fraction c(1,2);
    //checks if a/b equal c
    CHECK((a/b)==c);
    CHECK((a/b)==0.5);
}

TEST_CASE("operator/ Fractions and float") {
    //create 2 new fractions and one float
    Fraction a(1,2);
    float b= 1.0;
    Fraction c(1,2);
    //checks if a/b equal c
    CHECK((a/b)==c);
    CHECK((a/b)==0.5);
    CHECK((b/a)==2.0);
}

TEST_CASE("operator/ cant devide by 0") {
    //create 2 new fractions and one float
    Fraction a(1,2);
    float b= 0.0;
    //cant devide by 0
    CHECK_THROWS(a/b);
    //can devide 0 with a number
    CHECK_NOTHROW(b/a);
}

TEST_CASE("operator* Fractions only") {
    //create 3 new fractions
    Fraction a(1,2);
    Fraction b(1,2);
    Fraction c(1,4);
    //checks if a*b equal c
    CHECK((a*b)==c);
    CHECK((a*b)==0.25);
}

TEST_CASE("operator* Fractions and float") {
    //create 2 new fractions and one float
    Fraction a(1,2);
    float b= 0.5;
    Fraction c(1,4);
    //checks if a*b equal c
    CHECK((a*b)==c);
    CHECK((a*b)==0.25);
    CHECK((b*a)==c);
}

TEST_CASE("operator== Fractions only") {
    //create 2 new fractions
    Fraction a(1,2);
    Fraction b(1,2);
    //checks if a==b
    CHECK(a==b);
    CHECK(a==0.5);
}

TEST_CASE("operator== Fractions and float") {
    //create new fraction and one float
    Fraction a(1,2);
    float b= 0.5;
    //checks if a==b
    CHECK(a==b);
    CHECK(a==0.5);
    CHECK(b==a);
}

TEST_CASE("operator> Fractions only") {
    //create 2 new fractions
    Fraction a(1,2);
    Fraction b(1,4);
    //checks if a>b or b>a
    CHECK((a>b)==true);
    CHECK((b>a)==false);
}

TEST_CASE("operator> Fractions and float") {
    //create new fraction and float
    Fraction a(1,2);
    float b= 0.25;
    //checks if a>b or b>a
    CHECK((a>b)==true);
    CHECK((b>a)==false);
    CHECK((a>0.5)==false);
}

TEST_CASE("operator< Fractions only") {
    //create 2 new fractions
    Fraction a(1,2);
    Fraction b(1,4);
    //checks if a<b or b<a
    CHECK((a<b)==false);
    CHECK((b<a)==true);
}

TEST_CASE("operator< Fractions and float") {
    //create new fraction and float
    Fraction a(1,2);
    float b= 0.25;
    //checks if a<b or b<a
    CHECK((a<b)==false);
    CHECK((b<a)==true);
    CHECK((a<0.5)==false);
}

TEST_CASE("operator>= Fractions only") {
    //create 3 new fractions
    Fraction a(1,2);
    Fraction b(1,4);
    Fraction c(1,2);
    //checks if a>=b or b>=a
    CHECK((a>=b)==true);
    CHECK((b>=a)==false);
    //checks if a>=c or c>=a
    CHECK((a>=c)==true);
    CHECK((c>=a)==true);
}

TEST_CASE("operator>= Fractions and float") {
    //create new fraction and float
    Fraction a(1,2);
    float b= 0.25;
    float c= 0.5;
    //checks if a>=b or b>=a
    CHECK((a>=b)==true);
    CHECK((b>=a)==false);
    //checks if a>=c or c>=a
    CHECK((a>=c)==true);
    CHECK((c>=a)==true);
}

TEST_CASE("operator<= Fractions only") {
    //create 3 new fractions
    Fraction a(1,2);
    Fraction b(1,4);
    Fraction c(1,2);
    //checks if a<=b or b<=a
    CHECK((a<=b)==false);
    CHECK((b<=a)==true);
    //checks if a<=c or c<=a
    CHECK((a<=c)==true);
    CHECK((c<=a)==true);
}

TEST_CASE("operator<= Fractions and float") {
    //create new fraction and float
    Fraction a(1,2);
    float b= 0.25;
    float c= 0.5;
    //checks if a<=b or b<=a
    CHECK((a<=b)==false);
    CHECK((b<=a)==true);
    //checks if a<=c or c<=a
    CHECK((a<=c)==true);
    CHECK((c<=a)==true);
}

TEST_CASE("operator++: a++") {
    //create 2 new fractions
    Fraction a(1,2);
    Fraction b(3,2);
    //checks that a++ change a after the line
    CHECK((a++)==0.5);
    CHECK((a++)==b);
}

TEST_CASE("operator++: ++a") {
    //create 2 new fractions
    Fraction a(1,2);
    Fraction b(5,2);
    //checks that ++a change a before the line
    CHECK((++a)==1.5);
    CHECK((++a)==b);
}

TEST_CASE("operator--: a--") {
    //create 2 new fractions
    Fraction a(5,2);
    Fraction b(3,2);
    //checks that a-- change a after the line
    CHECK((a--)==2.5);
    CHECK((a--)==b);
}

TEST_CASE("operator--: --a") {
    //create 2 new fractions
    Fraction a(5,2);
    Fraction b(3,2);
    //checks that --a change a before the line
    CHECK((--a)==1.5);
    CHECK((--a)==b);
}

TEST_CASE("ostream") {
    //create 2 new fractions
    Fraction a(5,2);
    Fraction b(3,2);
    //checks that ostream not throw
    CHECK_NOTHROW(cout << "a+b" << a+b << endl);
}

// TEST_CASE("istream") {
//     //create 2 new fractions
//     Fraction a(5,2);
//     Fraction b(3,2);
//     string s;
//     cout << "enter mathematical operation between a and b (for example: a+b): ";
//     //checks that istream not throw
//     cin >> s;
//     cout << "You entered " << s << endl;
// }

TEST_CASE("mathematical operation chaining") {
    //create 2 new fractions
    Fraction a(5,2);
    Fraction b(3,2);
    //checks that chaining of operations not throw
    CHECK_NOTHROW(cout << "(((a+(--b))*a-0.33+1)*b/0.5)*(++a)= " << (((a+(--b))*a-0.33+1)*b/0.5)*(++a) << endl);
}










