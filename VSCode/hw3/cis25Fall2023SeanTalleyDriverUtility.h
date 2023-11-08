/**
 * Program Name: cis25Fall2023SeanTalleyDriverUtility.h
 * Discussion:   Driver Utility Specification File
 * Written By:   Sean Talley
 * Date:         2023/10/19
 */

#ifndef CIS25HWDRIVERUTILITY_H
#define CIS25HWDRIVERUTILITY_H

// Include and Header Files
#include <iostream>
#include "cis25Fall2023SeanTalleyFraction.h"

using namespace std;

// Function Prototypes
void testFraction(void);

void testReference(int&);

void testReference1(int&);

void swap(int, int);
void swap(int*, int*);
//void swap(int&, int&);

void testSwap(void);

#endif