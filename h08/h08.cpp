/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h08.h"

// Place your function definitions in this file.
string zipZap(const string& str)
{
    string result;
    return result;
}
int countCode(const string& str)
{
    int result = 0;
    for (size_t i = 4, len = str.size(); i <= len- 3; i++)
    {
        string word = str.substr(i - 4, 4);
        string front = word.substr(0,2);
        string back = word.substr(3);
        if (front == "co" && back == "e") result ++;
    }
    return result;
}
string everyNth(const string& str, int n)
{
    string result;
    return result;
}
bool prefixAgain(const string& str, int n)
{
    return str.substr(1).find(str.substr(0,n)) != string::npos;
}
////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}