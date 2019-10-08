/**
    @file h13.h
    @author Diego Diaz
    @data F19 TTH6-8:30
*/
#ifndef H13_H_
#define H13_H_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

/**
 * Opens and processes the data sets in fileName.
 * Returns as a string the count and the average.
 * @param fileName name of the file.
 * @return the stats as described in the handout.
 */
std::string dataSets(const std::string& fileName);

#endif
