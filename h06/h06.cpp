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
    string plain;
    string masculine;
    //result is given a value
    result = "who knows";
    //returns the variable

    //STEP 2
    string islands = "iles";
    string vowels = "AEIOU"; //variable set that only cares about first letter
    string first = country.substr(0,1); //this grabs the first character
    string end = country.substr(country.size() - 2); // last two character
    string last =  country.substr(country.size() - 1); //last character



    if (masculine == "Belize" || masculine == "Cambodge" || masculine == "Honduras" || masculine == "Mexique" ||
        masculine == "Mozambique" || masculine == "Costa Rica" || masculine == "Zimbabwe" )
    {
        prefix == "le ";
    }

    else if (plain == "Israel" || plain == "Madagascar" || plain == "Sri Lanka" ||
             plain == "Singapore" || plain == "Monaco" || plain == "Cuba" || plain == "Cyprus" )
    {
        prefix == " ";
    }

    else if (country.substr(0,4) == islands || end == "es" || end == "is" ||
        end == "os" || end == "as")
    {
        prefix = "les ";
    }

    else if (size_t found = first.find(vowels))
    {
        prefix = "l'";
    }


    else if (last == "e" || last == "o")
    {
        prefix = "la ";
    }

    else
    {
        prefix == "le ";
    }


    //then make result add prefix and country
    result = prefix + country;
    return result;
}



/////////////// Optional Student Code /////////////////
int run()
{

    return 0;
}
