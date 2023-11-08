/**
* Program Name: cis25Fall2023SeanTalleyHw1
* Discussion:   Homework #1
* Written By:   Sean Talley
* Date:         2023/09/19
*/

// Include/Header File(s)
#include <iostream>
using namespace std;

// Declared Functions
void introText();
void hw1();

// Application Driver
int main() {
	// Text block
	introText();

	// Run the actual homework code
	hw1();

	return 0;
}

/* Functions Initialized */

void introText() {
	cout << "We write code to manipulate data, which are\n"
		    "provided by the user(s), to produce the\n"
		    "required outcome in the most efficient way!\n"
		    "\n"
		    "CIS 25 - C++ Programming\n"
		    "Laney College\n"
		    "Sean Talley\n"
		    "\n"
		    "Information --\n"
		    "Assignment:               HW #1 Exercise #1\n"
		    "Implemented by:           Sean Talley\n"
		    "Required Submission Date: 2023/09/18\n"
		    "Actual Submission Date:   2023/09/19\n"
		 << endl;
}

void hw1() {
	cout << "Enter an integer: ";

	int usrInputST;

	cin >> usrInputST;

	if (usrInputST == 0) {
		cout << "\n0 is even!" << endl;
	}
	else {
		cout << "\n" << usrInputST << " is " << (usrInputST < 0 ? "negative" : "positive") << " and " << (usrInputST % 2 == 0 ? "even!" : "odd!") << endl;
	}
}

/* PROGRAM_OUTPUT

--- OUTPUT - Sample Run #1 ---
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #1 Exercise #1
Implemented by:           Sean Talley
Required Submission Date: 2023/09/18
Actual Submission Date:   2023/09/14

Enter an integer: -29

-29 is negative and odd!

--- OUTPUT - Sample Run #2 ---
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #1 Exercise #1
Implemented by:           Sean Talley
Required Submission Date: 2023 / 09 / 18
Actual Submission Date:   2023 / 09 / 14

Enter an integer: -294258

-294258 is negative and even!

--- OUTPUT - Sample Run #3 ---
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #1 Exercise #1
Implemented by:           Sean Talley
Required Submission Date: 2023 / 09 / 18
Actual Submission Date:   2023 / 09 / 14

Enter an integer: 41294258

41294258 is positive and even!

--- OUTPUT - Sample Run #4 ---
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #1 Exercise #1
Implemented by:           Sean Talley
Required Submission Date: 2023/09/18
Actual Submission Date:   2023/09/14

Enter an integer: -1294258

-1294258 is negative and even!

--- OUTPUT - Sample Run #5 ---
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #1 Exercise #1
Implemented by:           Sean Talley
Required Submission Date: 2023/09/18
Actual Submission Date:   2023/09/14

Enter an integer: 0

0 is even!
*/

/** Logic_Code_Output Issues
 * The output terminal printed everything perfectly and ran just fine. I copied the output from the terminal and pasted it
 * into my PROGRAM_OUTPUT block but immediately noticed some small syntactic isses. There were added spaces in odd places
 * in my printed output, and I was very confused how that happened; I didn't recall adding those spaces! I went back
 * through the PROGRAM_OUTPUT block and removed all the weird spaces I could find so that it matched the terminal output.
 */