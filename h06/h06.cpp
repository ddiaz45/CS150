/**
 *  @author Diego Diaz
 *  @date 09/16/2019
 *  @file h06.cpp
 */
#include <string>
using namespace std;

string STUDENT = "Diego Diaz";  // Add your Canvas login name

// Implement your function here

//defining the function
string toFrenchGender(const string& country)
{
    //result is initialized
    string result;
    string prefix;
    //result is given a value
    result = "who knows";
    //returns the variable

    //STEP 2
    string islands = "iles";
    string last =  country.substr(country.size()-1); //last character
    string end = country.substr(country.size()-2); // last two character


    //if any are true then set prefix to "les"
        //country starts with value in islands
        //last is one of "es", 'is', 'os', 'as'

    if (country.substr(0,4) == islands || end == "es" || end == "is" ||
        end == "os" || end == "as")
    {
        prefix == "les";
    }


    //country end in letter e or o? -feminine prefix -> la
    //otherwise- masculine prefix -> le
    //the exceptions
        //belize cambodge mexique mozambique zaire zimbabwe -> le
        //starts with a vowel? -> prefix l'
        //plural -> prefix les
        // israel, madasgascar, sri lanka, singapore, monaco, cuba, and cyprus
        //these have no prefix

    //need to write if statements
    //create a string variable, prefix inside processing



    //then make result add prefix and country
    result = prefix + country;
    return result;
}



/////////////// Optional Student Code /////////////////
int run()
{

    return 0;
}
