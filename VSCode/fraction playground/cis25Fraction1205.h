/**
 * Program Name: cis25Fraction1205.h
 * Discussion:   Specification File - Fraction Objects
 * Written By:   Someone
 * Date:         2023/12/05
 */

#ifndef CIS25FRACTION_H
#define CIS25FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
public:
    // Constructors
    Fraction(); // default constructor
    Fraction(const Fraction&); // copy constructor
    Fraction(int, int);

    // get()/set()
    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    Fraction add(const Fraction&) const;
    void print(void) const;

    bool isNumPalindrome(void) const;
    bool isDenomPalindrome(void) const;

    //ostream& operator<<(ostream&) const;

    friend ostream& operator<<(ostream&, 
        const Fraction&);
        
private:
    int num; // private member data
    int denom; // private member data

    int gcdA(int, int) const;
};

//ostream& operator<<(ostream&, const Fraction&);

#endif
