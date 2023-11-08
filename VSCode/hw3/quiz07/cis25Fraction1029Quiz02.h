/**
 * Program Name: cis25Fraction1029Quiz02.h
 * Discussion:   Specification File - Fraction Objects
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

#ifndef CIS25FRACTION_H
#define CIS25FRACTION_H

class Fraction {
public:
    // Constructors
    Fraction(); // default constructor
    Fraction(int); // convert constructor

    // get()/set()
    int getNum(void) const;
    void setNum(int);

    int getDenom(void) const;
    void setDenom(int);

private:
    int num; // private member data
    int denom; // private member data
};

#endif
