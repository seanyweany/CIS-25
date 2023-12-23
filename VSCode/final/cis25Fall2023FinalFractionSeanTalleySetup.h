/**
 * Program Name: cis25Fall2023FinalFractionSeanTalleySetup.h
 * Discussion:   Specification File - Fraction Objects
 * Written By:   Sean Talley
 * Date:         2023/12/13 - 2023/12/14
 */

#ifndef CIS25FALL2023FINALFRACTIONSEANTALLEY_H
#define CIS25FALL2023FINALFRACTIONSEANTALLEY_H

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
