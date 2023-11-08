/**
 * Program Name: driver.cpp
 * Discussion:   Application with OneInt Objects
 * Written By:   Sean Talley
 * Date:         2023/11/02 
 */

// Include and Header Files
#include <iostream>
#include "oneInt1102.h"
using namespace std;

// Application Driver
int main() {
    OneInt oneIntObj{12};

    //cout << oneIntObj.getData() << endl;

    OneInt copiedObj{oneIntObj}; // copy constructor!

    return 0;
}

/* */

/* */