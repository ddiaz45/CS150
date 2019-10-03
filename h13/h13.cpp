/**
 *  @author Diego Duaz
 *  @date 10/02/2019
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "ddiaz45"; // Add your Canvas/occ-email ID

#include "h13.h"

// Define your function here
string dataSets(const std::string& fileName)
{


    //open file name as input file in
    //if in cannot be opened then return error message
    ostringstream result;
    ifstream in(fileName.c_str());
    if (in.fail()) result << "data/notfound.txt cannot be opened.";

    int dataset = 1;
    int n;
    while (in >> n)
    {
        double sum = 0.0;
        int count = 0;
        while(n != 0)
        {
            double value;
            in >> value;
            sum += n*value;
            count += n;
            in >> n;
        }
        if (dataset > 1) result << "\n";
        result << fixed << setprecision(4);
        result << "data set " << dataset<< ": total values = " << count << "\naverage value = "
        << sum/ static_cast<double>(count) << endl;
        dataset++;
    }
    return result.str();
}



///////////////// Student Testing /////////////////////////
int run()
{
    cout << "Student tests" << endl;
    return 0;
}