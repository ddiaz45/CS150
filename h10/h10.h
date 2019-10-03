#ifndef H10_H_
#define H10_H_
/**
    @file h10.h
    @author
    @version
*/
#include <string>

// Place your prototypes here
    bool read(const string& agePrompt, int& age, bool check = true);

    bool read(const string& gpaPrompt, double& gpa, bool check = true);

    bool read(const string& namePrompt, string& name, bool check = false);

    bool read(char& ch, char dot);

#endif
