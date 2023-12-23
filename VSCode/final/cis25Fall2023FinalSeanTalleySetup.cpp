/**
 * Program Name: cis25Fall2023FinalSeanTalleySetup.cpp
 * Discussion:   Final Exam --> Application Driver
 * Written By:   Sean Talley
 * Date:         2023/12/13 - 2023/12/14
 */

// Include and Header Files
#include <iostream>
#include "cis25Fall2023FinalFractionSeanTalleySetup.h"
#include "cis25Fall2023FinalFractionUtilitySeanTalleySetup.h"
#include "cis25Fall2023FinalUtilitySeanTalleySetup.h"
using namespace std;

// Application Driver
int main() {
    
    displayClassCodingStatementST(); 
    displayClassInfoST();
    displayVersionST();

    runMenuFinalSetupST();
 
    return 0;
}

/* PROGRAM OUTPUT
  We write code to manipulate data (which are
  provided by the user) to produce the
  required outcome in the most efficient way!

  For Code Convention and Style -

    Again, writing code is not just the code works.
    It also involves care, patience, coding idioms + forms,
    and other reminders. Please see the posted code written
    in class and the explanation of coding convention
    C/CPP file.

    AND

    If writing in C, you are only allowed to use printf()
    and scanf() from the stdio.h header. You will write
    everything else by yourself.

    If writing in C++, you are only allowed to use
    cout and cin from the iostream header. You will write
    everything else by yourself.

    ALSO,

    - Including PROGRAM COMMENT block!

    - Inserting required Comment lines!

    - Removing unnecessary blank lines!

    - If needed, 1 blank line is sufficient!

    - Keeping lines to be reasonable short; for examples,
      around 65 characters!

    - For functions without arguments, insert ∩┐╜void∩┐╜ in the
      function prototypes!

    - For functions without arguments, remove ∩┐╜void∩┐╜ in the
      argument list of the function definitions!

    - Keeping indentation levels with the same consistently!

    - Declaring all variables at the top of function!

    - Declaring one variable per line except for the indices!

    - Using better name!

    - Following the naming rules!

    - Removing all comments that are not required!

    - Inserting proper spaces around '(', ')', '{',
      and operators!

    - Using proper code idioms, and efficient operators and
      styles!

    - Paying attention to the exact layout of the required
      output to earn full credits!

    - Replacing ST with the initial of your first-name and
      last-name!


  For Operational Code -


    - No global variables/values!

    - No extern setups!

    - Menu must be a combination of do - while and switch
      structures, and it has no arguments!

    - Use initialization with proper initial value!

    - If C++, you must use proper uniform initialization.

    - Variables may not need to be initialized!

    - If it is C++ coding, then
        "string" class is not allowed in this class. For the
        classes that are not written by you, only ostream
        (for cout) and istream(for cin) are allowed.
        You are only allowed to use cout and cin from
        the iostream header.

    - Again, uniform initialization!

    - All pointers must have values; that means initial
      address or setting address.

    - After releasing the dynamic block, its pointer
      must be reset to NULL(in C) or nullptr (in C++).

    - Dynamic objects and data->Memory management!

    - In C, you are allowed to use only malloc() and
      free().

    - In C++, you must use "new" and "delete" operators

    - In C/C++, do not write
          someVariable = -1 * somevariable;
          someIncrement = someIncrement + 1;
          if (someTestingValue != 0)
          while (someTestingValue != 0)

    - In C/C++, do write
          someVariable = -somevariable;
          someIncrement++;
          if (someTestingValue)
          while (someTestingValue)


    - Use proper code idioms, and efficient operators
      and styles!

    - Write your own code!

    - Except for the member data, member functions,
      function arguments and local variables within
      member functions, and indices of i, j, k, etc., all
      other variables must have the initials of your
      first-name and last name added to the end of
      the variable names.

    - For examples,
          int usrInputST;
          int digitCountST;
          int absValueST;
          int tmpST;

          // Function Prototypes
          void doGood(void);
          void displayDigit(int);

          // Function Definitions

          void doGood() {

              // Function Body
          }

          void displayDigit(int arg) {

             // Function Body
          }

    - All stand - alone function names must have the
      initials of your first-name and last-name
      appended at the end.

    - All filenames must have your complete first-name
      and last-name appended as required.

  For OUTPUT and Copy of OUTPUT -

    After copying the output to the driver, do not
    manually modify / change / insert text for the
    output of your code!You will get zero(0) for the work!
    I willrun your code and know if you manually alter the
    pasted output as submitted in your C / C++
    (and header) files!

  For LOGIC_CODE_OUTPUT_Issues block -

    Do not forget this block!

  For the final exam, NO ADDITIONAL FUNCTIONS are ALLOWED!

++++++++++

  While displayClassInfoST() is running!

  CIS 25 ΓÇô Introduction to Programming (Using C++)
  Laney College
  Sean Talley

  Information --
    Assignment:               Final Exam
    Implemented by:           Sean Talley
    Required Submission Date: 2023/12/14

++++++++++


  While displayVersionST() is running!

    Enter your last 2 digits of student ID: 95

  95 confirms the following --

    I will work with VERSION 1!

++++++++++

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 6

Wrong Option!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 3

PRINTING Option -
  Using member function in this option!

  No Fraction built!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

    No Fraction!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 1

IINITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Please create or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Creating 1 NEW Fraction object --

  Calling createFractionST()!

    Enter num: -45435908

    Enter denom: -365563

    One Fraction of
      Address : 0x14f6b70
        num : 45435908
        denom : 365563
    has just been created/built!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 3

PRINTING Option -
  Using member function in this option!

  Address : 0x14f6b70
    num : 45435908
    denom : 365563

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

  The Fraction is not a Palindrome!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 1

IINITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionST()!

    Enter num: 3945493

    Enter denom: -121

    The Fraction object at0x14f6b70 has been updated as
      num : -3945493
      denom : 121

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Please update or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

  The Fraction is a Palindrome!

  There is/are 4 unique odd digit(s) found in the Fraction.

  The smallest unique odd digit that occurs the least
  number of times and only seen either in the numerator or
  denominator but not both is

    5 seen 1 time(s) in the numerator!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 1

IINITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionST()!

    Enter num: 3942493

    Enter denom: -121

    The Fraction object at0x14f6b70 has been updated as
      num : -3942493
      denom : 121

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Please update or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 3

PRINTING Option -
  Using member function in this option!

  Address : 0x14f6b70
    num : -3942493
    denom : 121

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

  The Fraction is a Palindrome!

  There is/are 3 unique odd digit(s) found in the Fraction.

  The smallest unique odd digit that occurs the least
  number of times and only seen either in the numerator or
  denominator but not both is

    1 seen 2 time(s) in the denominator!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 1

IINITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Please update or return!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionST()!

    Enter num: 6

    Enter denom: -181

    The Fraction object at0x14f6b70 has been updated as
      num : -6
      denom : 181

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

  The Fraction is a Palindrome!

  There is/are 1 unique odd digit(s) found in the Fraction.

  The smallest unique odd digit that occurs the least
  number of times and only seen either in the numerator or
  denominator but not both is

    1 seen 2 time(s) in the denominator!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 1

IINITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionST()!

    Enter num: 16861

    Enter denom: 38683

    The Fraction object at0x14f6b70 has been updated as
      num : 16861
      denom : 38683

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 3

PRINTING Option -
  Using member function in this option!

  Address : 0x14f6b70
    num : 16861
    denom : 38683

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

  The Fraction is a Palindrome!

  There is/are 2 unique odd digit(s) found in the Fraction.

  The smallest unique odd digit that occurs the least
  number of times and only seen either in the numerator or
  denominator but not both is

    1 seen 2 time(s) in the numerator!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 1

IINITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Updating an EXISTING Fraction object -

  Calling updateFractionST()!

    Enter num: 131

    Enter denom: 9

    The Fraction object at0x14f6b70 has been updated as
      num : 131
      denom : 9

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 3

PRINTING Option -
  Using member function in this option!

  Address : 0x14f6b70
    num : 131
    denom : 9

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 2

Calling displayPalindromeInfoST()!

  While Calling displayPalindromeInfoST() is running -

  The Fraction is a Palindrome!

  There is/are 3 unique odd digit(s) found in the Fraction.

  The smallest unique odd digit that occurs the least
  number of times and only seen either in the numerator or
  denominator but not both is

    3 seen 1 time(s) in the numerator!

***************************************************
*               MENU - Final Exam 1O              *
*  1. Setting Up Fraction through initSubMenuST() *
*  2. Calling displayPalindromeInfoST()           *
*  3. Printing Current Fraction                   *
*  4. Quit                                        *
***************************************************
Select an option (use integer value only): 4

Calling ~Fraction()!

Have a great Holiday Season!

*/

/* Logic_Code_Output Issues
 * I don't believe there are
 * any issues with the output.
 */