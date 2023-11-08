/**
 * Program Name: cis25Fall2023SeanTalleyFraction.cpp
 * Discussion:   Implementation File - Fraction Objects
 * Written By:   Sean Talley
 * Date:         2023/10/19
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023SeanTalleyFraction.h"

using namespace std;

Fraction::Fraction() : num{0}, denom{1} { // uniform initialization syntax
    // what goes in here!?
    //num = 0;
    //denom = 1;

    cout << "\nnum: " << num
         << "\ndenom: " << denom << endl;
}

//Fraction::Fraction() {
//    num = 0; // update num with 0
//   denom = 1; // update denom with 1
//}

//Fraction::Fraction(int n) {
//    num = n; // update num with n
//    denom = 1; // update denom with 1
//}

Fraction::Fraction(int n) : num { n }, denom{ 1 } {

}