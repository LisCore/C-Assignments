/******************************************************************************
# Author:           Corey Lee
# Assignment:       A02 (CS161A)
# Date:             April 11, 2022
# Description:      This program will calculate how many gumballs are in a sphere given the 
#					size of a jar. 
# Input:            Float variable for radius and height of jar 
					Double variable for radius of one gumball
# Output:           Calculation of how many gumballs are in one jar
# Sources:          Assignment 1 specifications
#******************************************************************************/

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
const double PI = M_PI;
using namespace std;

int main() {
	double radiusGum;
	double radiusJar;
	double heightJar;
	double gumball;
	double numGumballs;
	double volume;
	const double LOAD_FACTOR = 0.69;
	const double PI = M_PI;

	cout << "Hello, today we will be figuring out how many gumballs are in a Jar!" << endl;;
	cout << "Please enter radius of gumball (cm): " << endl;
	cin  >> radiusGum;
	cout << "Please enter radius & height of jar separated by a space" << endl;
	cin  >> radiusJar >> heightJar;

	gumball = (4.0 / 3) * PI * (radiusGum * radiusGum * radiusGum);
	volume  = PI * (radiusJar * radiusJar) * heightJar;
	round(numGumballs) = (LOAD_FACTOR * volume) / gumball;

	cout << "Estimated Number of Gumballs: " << round(numGumballs) << endl;

	return 0;
}