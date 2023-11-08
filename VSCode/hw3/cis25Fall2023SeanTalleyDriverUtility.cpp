/**
 * Program Name: cis25Fall2023SeanTalleyDriverUtility.cpp
 * Discussion:   Implementation File - Driver/Application
 * Written By:   Sean Talley
 * Date:         2023/10/19
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023SeanTalleyFraction.h"
#include "cis25Fall2023SeanTalleyDriverUtility.h"

using namespace std;

// Functions Definitions

void testFraction() {
    //Fraction fr1;
    //Fraction fr2();
    //Fraction fr3{}; // calling to the default constructor

    //Fraction fr4{ 5 };

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

    cout << appleCount << " " << orangeCount << endl;

    swap(appleCount, orangeCount); // never work

    cout << orangeCount << " " << appleCount << endl;

    /*
    swap(10, 20);

    swap(&appleCount, &orangeCount);
    */
}