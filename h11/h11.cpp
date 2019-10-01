/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "Diego Diaz"; // Add your Canvas/occ-email ID
    //inSingleCmt, inMultiCmt, inString be false
    //read character "ch" from input UNTIL end-of-input
    //IF "ch" is not inside a comment then echo "ch" to output

// Write your function here
void strip()
{
    bool inSingleCmt = false;
    bool inMultiCmt = false;
    bool inString = false;
    char ch;
    while (cin.get(ch))
    {
        if (inSingleCmt && ch == '\n')
        {
            inSingleCmt = false;
        }
        else if (inString && ch =='\\' && cin.peek() == '"')
        {
            inString = false;
        }
        else if (inMultiCmt && ch == '*' && cin.peek() == '/')
        {
            cin.get(ch);
            inMultiCmt = false;
        }
        else if (!(inString) && !(inSingleCmt) && !(inMultiCmt))
        {
            if (ch == '"')
            {
                inString = true;
            }
            else if (ch == '/' && cin.peek() == '*')
            {
                inMultiCmt = true;
            }
            else if (ch == '/' && cin.peek() == '/')
            {
                inSingleCmt = true;
            }
        }
        else if (inSingleCmt && ch == '\n')
        {
            inSingleCmt = false;
        }
    }

}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}