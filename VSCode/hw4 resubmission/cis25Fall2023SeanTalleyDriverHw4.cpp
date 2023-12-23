/**
 * Program Name: cis25Fall2023SeanTalleyDriverHw4.cpp
 * Discussion: File #7 -
 *               Application Driver
 * Written By: Sean Talley
 * Date: 2023/11/19 - 2023/12/13
 */

// Include/Header File(s)
#include <iostream>
#include "fractionSeanT.h"
#include "fractionUtilitySeanT.h"
#include "hw4UtilitySeanT.h"

using namespace std;

// Application Driver
int main() {
    displayCodingStatementST();
    displayClassInfoHw4ST();

    runMenuHw4ST();

    return 0;
}

/** PROGRAM OUTPUT
We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Sean Talley

Information --
Assignment:               HW #4
Implemented by:           Sean Talley
Required Submission Date: 2023/12/13
Actual Submission Date:   2023/12/13

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 6

WRONG OPTION!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 2

Using isPalindromeST() Option -

  Not a proper option as there is no Fraction!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 1

INITIALIZING Option -

Calling initSubMenuST() -

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 2

  Not a proper option as there is no Fraction!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 5

  WRONG OPTION!

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 1

  Creating 1 NEW Fraction object --

  Calling createFractionST()!

    Enter num: 5
    Enter denom: -959

    One Fraction of
      Address : 0x11c85c8
        num : -5
        denom : 959
    has just been created/built!

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

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 4

PRINTING Option -

  Address : 0x11c85c8
    num : -5
    denom : 959

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 2

Using isPalindromeST() Option -

  The current Fraction is a Palindrome!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 3

Calling displayCommonPalindromeDigitST() Option -

  There is/are 1 common digit(s) of
    5

  The largest common Palindrome digit: 5

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 1

INITIALIZING Option -

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

    Enter num: 156810000
    Enter denom: 49914173

    The Fraction object at 0x11c85c8 has been updated as
        num : 156810000
        denom : 49914173

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 4

PRINTING Option -

  Address : 0x11c85c8
    num : 156810000
    denom : 49914173

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 2

Using isPalindromeST() Option -

  The current Fraction is not a Palindrome!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 3

Calling displayCommonPalindromeDigitST() Option -

  The current Fraction is not a Palindrome!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 1

INITIALIZING Option -

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

    Enter num: 1551
    Enter denom: 5491945

    The Fraction object at 0x11c85c8 has been updated as
        num : 1551
        denom : 5491945

  ******************************
  * initSubMenu - One Fraction *
  *  1. Creating               *
  *  2. Updating               *
  *  3. Returning              *
  ******************************
  Select an option (integer only): 3

  Returning to previous menu!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 4

PRINTING Option -

  Address : 0x11c85c8
    num : 1551
    denom : 5491945

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 2

Using isPalindromeST() Option -

  The current Fraction is a Palindrome!

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 3

Calling displayCommonPalindromeDigitST() Option -

  There is/are 2 common digit(s) of
    1
    5

  The largest common Palindrome digit: 5

**************************************************
*                 MENU - HW #4                   *
* 1. Setting Up Fraction through initSubMenuST() *
* 2. Calling isPalindromeST()                    *
* 3. Calling displayCommonPalindromeDigitST()    *
* 4. Printing Current Fraction                   *
* 5. Quit                                        *
**************************************************
Select an option (use integer value only): 5

The Fraction is at
  Address : 0x11c85c8
    num : 1551
    denom : 5491945

Calling ~FractionSeanT()

The Fraction is now removed!

Having Fun ...!

*/

/** Logic_Code_Output_Issues
 * There aren't any issues I could
 * make out. Everything seems fine.
 */
