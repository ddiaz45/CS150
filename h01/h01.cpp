/**
 *  @author Diego Diaz
 *  @date 09/05/2019
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "Diego Diaz";  // Add your Canvas login name
extern string ASSIGNMENT;


/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    //need to get the hours and minutes for the current time. both need to be integerss
    //hours and minutes of the duration
    int timeHours, timeMinutes, durationHours, durationMinutes;
    char discard;

    cout << "Time: ";
    cin >> timeHours >> discard >> timeMinutes;

    cout << "Duration: ";
    cin >> durationHours >> discard >> durationMinutes;

    //int time, duration;
    //turn everything into minutes
    //need the four different variables for different inputs

    //these are the variables converting everything to minutes
    int thetime = (timeHours * 60) + timeMinutes;
    int duration = (durationHours * 60) + durationMinutes;

    //making the total after and before time(still in minutes)
    int aftertotal = thetime + duration;

    int beforetotal = thetime + 24 - duration;

    //these are the variables converting everything into hours and minutes
    int afterHours = aftertotal / 60 % 12;
    int  afterMinutes = (aftertotal % 60);

    int beforeHours = beforetotal / 60 % 12;
    int beforeMinutes = beforetotal % 60;
    //cout << endl;
    cout<< setfill('0');
    cout << durationHours << ":" << setw(2) << durationMinutes <<
            "hours after and before "
            << timeHours  << ":" << setw(2) << timeMinutes <<
            "is ["
            << afterHours << ":" << setw(2) << afterMinutes << "," <<
            beforeHours  <<":"<< setw(2) << beforeMinutes << "]"
            << endl;


    return 0;
}
