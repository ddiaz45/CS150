/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here

//istringstream out;

void get(istream& in, Point& p)
{
    char ch;
    in >> p.x >> ch >> p.y;
}

void print( ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
}

double distanceBetween(const Point& a, const Point& b)
{
    int distx = a.x - b.x;

    int disty = a.y - b.y;

    return sqrt(distx * disty + disty * disty);
}
Point midpoint(const Point& a, const Point& b)
{
    Point mid;
    mid.x = ((a.x + b.x) / 2);
    mid.y = ((a.y + b.y) / 2);
    return mid;
}

double perimeter(const Triangle& t)
{
    double perimter = 0.0;
    perimter += distanceBetween(t.p1, t.p2);
    perimter += distanceBetween(t.p2, t.p3);
    perimter += distanceBetween(t.p1, t.p3);
    return perimter;
}
/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    cout << "Enter a point as (x, y): ";
    Point p;
    get(cin, p);
    cout << "You entered ";
    print(cout, p);
    cout << endl;

    return 0;
}