/**
 *  @author Put your name here
 *  @date Put the date here (Semester is OK)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "Diego Diaz";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * One line describing what this program does.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here

    // Write your code here
    cout << STUDENT << '-'<<  ASSIGNMENT << ":";
    cout << "Cereal Box Calculator"<< endl;
    cout << string(50, '-')<< endl;
    //this is the input section of the code
    cout << "Enter ounces per box of cereal: ";
    double ouncesPerBox;
    cin >> ouncesPerBox;
    // processing section
    double weightInTons = ouncesPerBox/ 35273.92;
    double boxesPerTon = 1.0/weightInTons;

    cout << "weight in metric tons, boxes per ton: "
        << weightInTons << "," << boxesPerTon << "" << endl;

    return 0;
}

