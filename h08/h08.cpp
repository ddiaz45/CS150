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
    int len = str.size();
    int i = 0;
    if (len < 3)
    {
        return str;
    }
    while (i < len - 2)
    {
        string word = str.substr(i, 3);
        string front = word.substr(0,1);
        string back = word.substr(2);
        if (front == "z" && back == "p")
        {
            result += "zp";
            i += 3;
        }
        else
        {
            result += word.at(0);
            i++;
        }
    }
    return result;
}
int countCode(const string& str)
{
    int result = 0;
    for (size_t i = 4, len = str.size(); i <= len ; i++)
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
    for (int i = 0; i < n; i++)
    {
        result += n;
    }
    return result;
}
bool prefixAgain(const string& str, int n)
{
    string prefix = str.substr(0,n);
    for (int i = 1, len = str.size() - n; i <= len; i++)
    {
        string word = str.substr(i, n);
        if (word == prefix)
        {
            return true;
        }
    }
    return false;

}
////////////////// STUDENT TESTING /////////////
int run()
{
    cout << "Student testing" << endl;
    return 0;
}