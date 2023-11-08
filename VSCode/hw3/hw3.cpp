#include <iostream>
using namespace std;

//#define DEBUG
//#define CLASSWORK

#ifdef CLASSWORK
class Fraction {
    private:
        int num;
        int denom;

    public:
        // Constructors: Member Functions
        
        //Fraction();
        //Fraction(const Fraction&);
        //Fraction(int);

        // Member Functions
        double convertToFloatingPoint(void);

        Fraction add(const Fraction&);
        Fraction operator+(const Fraction&);
};
#endif

#ifdef DEBUG
    string arrayToString(int *ary) {
        string arrayString = "[";
        
        int n = sizeof(ary) / sizeof(ary[0]);

        for (int i = 0; i < n; i++) {
            arrayString += ary[i];
            
            if (i < n - 1) {
                arrayString += ", ";
            }
        }

        arrayString += "]";

        return arrayString;
    }

    void pointerStuff() {
        int* iPtr{nullptr};

        //cout << *iPtr << endl;

        int ary[5]{0};

        iPtr = ary;

        cout << arrayToString(iPtr) << endl;
    }
#endif    

void testPointerWithArray();

int* foo3();

// Application Driver!!!!!!!!!!!!!!!!!!!!!!!!!
int main() {
    // testPointerWithArray();

    // cout << *foo3() << endl;

    // int* dynary = new int[5]{0};

#ifdef DEBUG
    pointerStuff();
#endif

#ifdef CLASSWORK
    int usrInput; // Declaring usrInput as a variable to hold an int

    int iAry1[5]; // Creating an array without initial values

    Fraction fracB; // Creating/Building a Fraction object
                    // named fracB using a "default" constructor
                    // What is a constructor?
                    // 

    return 0;
#endif
}

void testPointerWithArray() {
    int usrInput;
    int* iPtr{ nullptr };
    int ary1[5] { 0 };

    iPtr = ary1;

    ary1[0] = 9;

    iPtr[1] = 15;

    iPtr[2] = iPtr[1] + iPtr[0] + 100;

    *(ary1 + 0) = 10;

    *(iPtr + 1) = 16;

    *(iPtr + 3) = 1112;

    cout << "[3]: " << *(ary1 + 3)
         << endl;
}

void testPointerOperations() {
    int usrInput1;
    int* iPtr2{ &usrInput1 };
    int usrInput;
    int* iPtr{ nullptr };
    int* iPtr1{ &usrInput };
    int ary1[5]{ 0 };

    iPtr = &usrInput;

    iPtr = &usrInput1;

    iPtr = &usrInput1 + 1;

    // iPtr = &usrInput + 1;

    iPtr = ary1;
}

void testDynamicMemory() {
    int* iPtr{ nullptr };
    int size;

    iPtr = new int;

    // TODO

    delete iPtr;
    iPtr = nullptr; // can't use iPtr{nullptr}; b/c {} are ONLY for initialization

    cout << "\nEnter the size: ";
    cin >> size;

    iPtr = new int[size]; // Operater new will
                          //   1. Send a request to the OS a block of 4 ints
                          //   2. Return the base address

    // TODO -- Loop through to store values

    // TODO -- Analyzing and displaying

    delete[] iPtr; // anti-new :>
    iPtr = nullptr; // whar: limit the weird-ahh memory reusing QUIT IT!!!!!
}

int* foo3() {
    int iSize{3};
    int* iPtr{nullptr};
    int iAry[4]{1, 9, 25};

    iPtr = new int[iSize];

    for (int i = 0; i < iSize; i++) {
        *(iPtr + i) = i * i;
    }

    delete[] iPtr;

    return iPtr;
}