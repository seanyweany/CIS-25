/**
* Program Name: fractionSeanT.h
* Discussion: File #1 -
                Specification File
*                 for your FractionSeanT class
* Written By: Sean Talley
* Date: 2023/11/19
*/

#ifndef FRACTIONSEANT_H
#define FRACTIONSEANT_H

// Include/Header File(s)
#include <iostream>

using namespace std;

// Rules/Constraints for FractionSeanT object
// Rule #1:
// denom cannot be zero!
// Rule #2:
// No common factor berween num and denom
// Rule #3:
// Negativity is imposed on num
class FractionSeanT {
public:
 // Constructors and destructor
 FractionSeanT();
 FractionSeanT(const FractionSeanT&);
 FractionSeanT(int);
 FractionSeanT(int, int);
 ~FractionSeanT(); // destructor

 // get()/set()
 int getNum(void) const;
 void setNum(int);
 int getDenom(void) const;
 void setDenom(int);
 
 // Others
 bool isNumPalindrome(void) const;
 bool isDenomPalindrome(void) const;

 FractionSeanT add(FractionSeanT&) const;

private:
 int num;
 int denom;
 
 // Helper(s)
 int gcdBF(int, int);
};
#endif