/**
 * Program Name: cis25DriverUtilityQuiz15.h
 * Discussion:   Drier Utility Specification File
 * Written By:   Someone
 * Date:         2023/10/19, 2023/10/26
 */

#ifndef CIS25DRIVERUTILITY_H
#define CIS25DRIVERUTILITY_H

// Include/Header Files
#include <iostream>
#include "cis25FractionQuiz15.h"

using namespace std;

// Function Prototypes

void swap(int, int);
void swap(int&, int&);
void swap(int*, int*);

void testSwap(void);

void displayDigitCount(int* ptr, int size);
void testDisplayDigitCount(void);

void testFraction15(void);

#endif
