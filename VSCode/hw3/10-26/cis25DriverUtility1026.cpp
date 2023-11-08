/**
 * Program Name: cis25DriverUtility1026.cpp
 * Discussion:   Implementation File - Driver/Appliication 
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

// Include and Header Files
#include <iostream>
#include "cis25Fraction1026.h"
#include "cis25DriverUtility1026.h"
using namespace std;

// Function Definitions

void testFraction() {
    //Fraction fr1;
    //Fraction fr2();
    Fraction fr3{}; // calling to the default constructor
    Fraction fr4{ 5 };

    //Fraction fr5{ fr4 };

    int tmp{ 9 };
    int& alias{ tmp };

    cout << tmp << endl; // 9
    cout << alias << endl; // 9

    cout << &tmp << endl;
    cout << &alias << endl;

    testReference(tmp);

    return;
}

void testReference(int& ref) {
    int usrInput;

    ref = -100; // tmp <-- 100

    testReference1(ref);
}

void testReference1(int& ref1) {
    ref1 = 0;
}

void testSwap() {
    int appleCount{ 5 };
    int orangeCount{ 9 };

    swap(appleCount, orangeCount); // never work
    swap(10, 20);

    swap(&appleCount, &orangeCount);

}