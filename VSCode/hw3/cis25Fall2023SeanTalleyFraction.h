/**
 * Program Name: cis25Fall2023SeanTalleyFraction.h
 * Discussion:   Specification File - Fraction Objects
 * Written By:   Sean Talley
 * Date:         2023/10/19
 */

#ifndef CIS25FRACTION_H
#define CIS25FRACTION_H

class Fraction {
    public:
        // Constructors
        Fraction(); // default constructor
        Fraction(const Fraction&); // copy constructor
        Fraction(int); // convert constructor

        // getters/setters
        int getNum(void) const;
        void setNum(int);

        int getDenom(void) const;
        void setDenom(int);

    private:
        int num;
        int denom;
};

#endif