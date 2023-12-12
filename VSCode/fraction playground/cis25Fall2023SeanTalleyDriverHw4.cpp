/**
* Program Name: cis25Fall2023SeanTalleyDriverHw4.cpp
* Discussion: File #7 -
*               Application Driver
* Written By: Sean Talley
* Date: 2023/11/19
*/

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"
#include "fractionUtilitySeanT.h"
#include "hw4UtilitySeanT.h"

using namespace std;

// Application Driver
int main() {
    //displayCodingStatementST();
    //displayClassInfoHw4ST();

    //runMenuHw4ST();

    FractionSeanT* frPtr1{ nullptr };
    FractionSeanT* frPtr2{ nullptr };

    frPtr1 = new FractionSeanT{};
    frPtr2 = new FractionSeanT{};

    (*frPtr1).add(*frPtr2);

    isPalindromeFL();

    return 0;
}

/** PROGRAM OUTPUT
Program does not compile.
*/

/** Logic_Code_Output_Issues
I could not get the program to
compile for various reasons.
*/
