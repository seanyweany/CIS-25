/**
 * Program Name: cis25DriverUtilityQuiz16.h
 * Discussion:   Drier Utility Specification File
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

#ifndef CIS25DRIVERUTILITY_H
#define CIS25DRIVERUTILITY_H

// Include/Header Files
#include <iostream>
#include "cis25FractionQuiz16.h"

using namespace std;

// Function Prototypes

void testFraction16(void);

void swap(int, int);
void swap(int&, int&);
void swap(int*, int*);

void testSwap(void);

void displayDigitCount(int* ptr, int size);
void testDisplayDigitCount(void);

#endif