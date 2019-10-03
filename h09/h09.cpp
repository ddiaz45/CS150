/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h09.cpp
 */
#include <string>
using namespace std;

string STUDENT = "DDIAZ45 ddiaz45@student.cccd.edu"; // Add your Canvas/occ-email ID

#include "h09.h"

// Put your function implementation (definitions) in this file
string codeForDigit (int digit)
{
    if (digit ==0)
    {
        return "||:::";
    }
    else if (digit == 1)
    {
         return ":::||";
    }
    else if (digit == 2)
    {
        return "::|:|";
    }
    else if (digit == 3)
    {
        return "::||:";
    }
    else if (digit == 4)
    {
        return ":|::|";
    }
    else if (digit == 5)
    {
        return ":|:|:";
    }
    else if (digit == 6)
    {
        return ":||::";
    }
    else if (digit == 7)
    {
        return "|:::|";
    }
    else if (digit == 8)
    {
        return "|::|:";
    }
    else if (digit == 9)
    {
        return "|:|::";
    }
    else
    {
        return "This is invalid";
    }
}

//works with a switch
//takes one digit and returns the appropriate code for that digit
//use ":" for the half bars and "|" for full bars

int checkDigit (int zip)
//use a limit loop as well as the remainder operator to find the digit
//calculates the check digit
//must find the 5 digits to make the barcode
{
    int digit1, digit2, digit3, digit4, digit5;
    {
    digit1 = zip % 10;

    zip /= 10;

    digit2 = zip % 10;

    zip /= 10;

    digit3 = zip % 10;

    zip /= 10;

    digit4 = zip % 10;

    zip /= 10;

    digit5 = zip % 10;

    zip /= 10;
    }
}
string barCode(int zip)
//calculate the check digit
//extract each digit using limit loop and get its code
//use building a string pattern to add the code
//add the code for the check digit and two frame bars

//returns an entire bar code by breaking the number into individual numbers
//encoding that digit and adding it to the string return value
//calculate and encode the check digit
//surround entire code with the frame bars, then return it
{
    string result;
    int digit = checkDigit(zip);
    int i = 0;
}


/////////// Student Testing ///////////////////////
int run()
{
    return 0;
}