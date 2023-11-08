/**
 * Program Name: cis25Fraction1026.cpp
 * Discussion:   Implementation File - Fraction Objects
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

// Include and Header Files
#include <iostream>
#include "cis25Fraction1026.h"
using namespace std;

Fraction::Fraction() : num{ 0 }, denom{ 1 } {
    //num = 0;
    //denom = 1;

    cout << "\nnum: " << num
        << "\ndenom: " << denom << endl;
}

//Fraction::Fraction() {
//    num = 0; // update num with 0
//    denom = 1; // update denom with 1
//}

//Fraction::Fraction(int n) {
//    num = n; // update num with n
//    denom = 1; // update denom with 1
//}

Fraction::Fraction(int n) : num{ n }, denom{ 1 } {

}

