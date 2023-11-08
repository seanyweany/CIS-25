/**
 * Program Name: oneInt1102.cpp
 * Discussion:   Implementation File -
 *                   OneInt class 
 * Written By:   Tuan Nguyen
 * Date:         2023/11/02
 */

// Include and Header Files
#include <iostream>
#include "oneInt1102.h"
using namespace std;

// Function Definitions
OneInt::OneInt(int arg) : data{arg} {};

OneInt::OneInt(const OneInt& arg) : data{arg.data} {};

/*
private int data;

OneInt(final SomeClass arg)
{
    data = arg.privateInt; // ILLEGAL
}
*/