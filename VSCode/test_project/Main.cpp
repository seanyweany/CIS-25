#include <iostream>
using namespace std;

/*
int evenDigits(int input) {
    int num = 0;

    if (input == 0) {
        return 0;
    } else if (input % 2 == 0) {
        num++;
    }

    num += evenDigits(input / 10);

    return num;
}

int digitNum(int input) {
    int digits = 0;

    if (input == 0) {
        return 1;
    } else if ( (input / 10) != 0) {
        digits++;
    }

    digits += digitNum(input / 10);

    return digits;
}
*/

void displayDigitCount(void);
void menuHw2(void);

int main() {
    // use switch, do while, arrays
    displayDigitCount;

    return 0;
}

void menuHw2() {
    int option;

    do {
        cout << 
        cin >> 
    } while (option != 2)
}

void displayDigitCount() {
    int usrInput;
    int digitCount = 0;

    cin >> usrInput;

    while (usrInput) {
        usrInput /= 10;

        digitCount++;
    }

    cout << digitCount << endl;
}