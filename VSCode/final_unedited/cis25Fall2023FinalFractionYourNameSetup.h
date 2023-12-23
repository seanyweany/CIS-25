/**
 * Program Name: cis25Fall2023FinalFractionYourNameSetup.h
 * Discussion:   Specification File - Fraction Objects
 * Written By:   Someone
 * Date:         2023/12/13
 */

#ifndef CIS25FALL2023FINALFRACTIONYOURNAME_H
#define CIS25FALL2023FINALFRACTIONYOURNAME_H

// Include and Header Files
#include <iostream>
using namespace std;

// Class Specification
class Fraction {
public:
    Fraction(); 
    Fraction(const Fraction&);
    Fraction(int, int);

    ~Fraction();

    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

    void update(int, int);
    void print(void) const;

    bool isNumPalindrome(void) const;
    bool isDenomPalindrome(void) const;

    friend ostream& operator<<(ostream&, 
        const Fraction&);
private:
    int num; 
    int denom; 

    int gcdA(int, int) const;
};

#endif
