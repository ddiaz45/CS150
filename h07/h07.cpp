/**
 *  @author Diego Diaz
 *  @date 09/17/2019
 *  @file h07.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "ddiaz45";  // Add your Canvas login name

// Implement your function here
//step 1 write the skeleton
int sumNums(const string& sN)
{
    //input is string and output is a integer
    int sum = 0;
    int num = 0;

    //for loop is designed for advancing the loop

    //loop index is i(less than the size of the string [labeled as len])
    for (size_t i = 0, len = sN.size() ; i <= len - 1 ; i++)

    {
        //first grab the currect character
        char currcharact = sN.at(i);
        if (isdigit(currcharact))
        {
            //convert character to decimal by subtracting 0
            currcharact -= '0';
            //multiply the current value by 10
            num *= 10;
            //add the digit
            num+= currcharact;
        }
        //encounter something that isnt a digit add it to the sum
        else
        {
            sum += num;
            num = 0;
        }
        //process the characters here
    }
    //return statement at the end
    sum += num;
    return sum;

}

/////////////// Optional Student Code /////////////////
int run()
{

    return 0;
}


