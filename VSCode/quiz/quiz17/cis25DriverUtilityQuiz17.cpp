/**
 * Program Name: cis25DriverUtilityQuiz17.cpp
 * Discussion:   Implementation File - Driver/Appliication 
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

// Include and Header Files
#include <iostream>
#include "cis25FractionQuiz17.h"
#include "cis25DriverUtilityQuiz17.h"
using namespace std;

// Function Definitions

void testFraction17() {
    Fraction fr{ };
    Fraction fr17{ fr }; 

    cout << fr17.gcdA(-12, 6) << endl;
}

void displayDigitCount(int* ptr, int size) {
    int digitCountAry[10] { 0 };
    int tmp;

    for (int i = 0; i < size - 1; i++) {
        if (*(ptr + i) < 0) {
            tmp = -(*(ptr + i));
        } else {
            tmp = *(ptr + i);
        }

        do {
            digitCountAry[tmp % 10]++;

            tmp /= 10;
        } while (tmp);
    }

    for (int i = 0; i < size; i++) {
        cout << "\n Digit " <<  i
            << " is seen " << digitCountAry[i] << " time(s)";
    }
}

void testDisplayDigitCount() {
    int ary[]{ -23443, 343787, -7654063 };
    int size{ 3 };

    displayDigitCount(ary, size);
}

void swap(int& arg1, int& arg2) {

    // TODO
}

void swap(int* arg1, int* arg2) {

    // TODO
}

void testSwap() {
    int appleCount{ 5 };
    int orangeCount{ 9 };

    //swap(appleCount, orangeCount); 
}