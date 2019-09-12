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


    // Write your code here

    int time = timeHours * 60 + timeMinutes;
    int duration = durationHours * 60 + durationMinutes;

    int timeafter = time + duration;
    int timebefore = time - duration;

    int afterhours = timeafter / 60;
    int afterminutes = timeafter % 60;
    int beforehours = timebefore / 60;
    int beforeminutes = timebefore % 60;
        if(beforehours == 0)
        {
            beforehours += 12;
        }
    cout << endl;
    cout << durationHours << ":" << durationMinutes << "hours after, and before, "
        << timeHours << ":" << timeMinutes << "is [" << afterhours << ":" << afterminutes << ", "
        << beforehours << ":" << beforeminutes << "]" << endl;




    return 0;
}
