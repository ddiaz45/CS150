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
    int thetime = (timeHours * 60 % 12) + timeMinutes;
    int duration = (durationHours * 60 % 12) + durationMinutes;

    //making the total after and before time(still in minutes)
    int aftertotal = thetime + duration;

    int beforetotal = thetime - duration;

    //these are the variables converting everything into hours and minutes
    int afterHours = aftertotal / 60 %12;
    int  afterMinutes = (aftertotal % 60);

    int beforeHours = beforetotal / 60 %12;
    int beforeMinutes = beforetotal % 60;
    cout << endl;
    cout << durationHours << ":" << durationMinutes <<
            "hours after and before" << timeHours << ":" << timeMinutes <<
            "is [" << afterHours << ":" << afterMinutes << "," <<
            beforeHours <<":"<< beforeMinutes << "]" << endl;

    //outputformatting
    cout << setfill('0');
   // cout << setw(2) << after / 60 << ":" << setw(2) << after % 60;



    //the processing portion
    //need four different variables for the different inputs
    //int sumHours, sumMinutes, diffHours, diffMinutes;

/*
    time = timeHours * 60 + timeMinutes;
    duration = durationHours * 60 + durationMinutes;


    after = time + duration;
    before = time - duration;

    afterHours = after /60;
    afterMinutes = after % 60;

    beforeHours = before/ 60;
    beforeMinutes = before % 60;


    cout >> "hello">>endl;
*/
/*
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

*/


    return 0;
}
