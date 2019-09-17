/**
 *  @author Diego Diaz
 *  @date 09/11/19
 *  @file h05.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "ddiaz45 C02418528"; // Add your Canvas/occ-email ID

/**
    @file h05.h
    @author Stephen Gilbert
    @version CS 150
*/
#ifndef H05_H
#define H05_H
/**
 * Calculates the focal length of a lens.
 * @param d thickness of the lens
 * @param r1 radii r1
 * @param r2 radii r2
 * @param n the refractive index
 * @return the focal length
 */
double focalLength(double d, double r1, double r2, double n);

#endif



//double focalLength(double d, double r1, double r2, double n, double numset1, double theanswer);

    double numset1;
    double theanswer;
        numset1 = (n - 1) * d;
        numset1 = numset1/(n * r1 * r2);
        numset1 = numset1 * (n - 1);
        theanswer = numset1 + (1 / r1) - (1 / r2);
        double theanswer2 = 1 / theanswer;

        return theanswer;



/////////////// Optional Student Code /////////////////
//#endif
int run()
{

    return 0;
}
