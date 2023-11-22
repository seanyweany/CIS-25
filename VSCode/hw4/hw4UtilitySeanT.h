/**
* Program Name: hw4UtilitySeanT.h
* Discussion: File #5 -
*               Specification File
* HW #4 Utility
* Written By: Sean Talley
* Date: 2023/11/19
*/

#ifndef HW4UTILITYSEANT_H
#define HW4UTILITYSEANT_H

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"
#include "fractionUtilitySeanT.h"

using namespace std;

// Required functions
void displayCodingStatementST(void);
void displayClassInfoHw4ST(void);

void runMenuHw4ST(void);

void initSubMenuST(FractionSeanT*&);

// Other functions as needed
FractionSeanT createFractionST(void);
FractionSeanT& updateFractionST(FractionSeanT*&);

#endif
