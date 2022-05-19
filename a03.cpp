/******************************************************************************
# Author:           Corey Lee
# Assignment:       A03 (CS161A)
# Date:             April 22, 2022
# Description:      This program takes input from user how many Oreos were consumed. This number is then 
#					used to calculate the servings and total calories. 
# Input:            int numOreos 
# Output:           Calories and servings consumed. Servings is set to one decimal place 
# Sources:			Assignment 3 guide, zybooks 3.3/3.10 
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

int main() {
	int numOreos = 0; 
	int totalCalories = 0; 
	double numServings = 0.0;
	const int COOKIES_PER = 3; 
	const int COOKIES_CALORIES = 53; 

	cout << "Hello and welcome to Oreo!" << endl; 
	cout << "Please enter how many Oreos consumed: ";
	cin  >> numOreos;
	
	totalCalories = numOreos * COOKIES_CALORIES; 
	numServings = static_cast<double>(numOreos) / COOKIES_PER;

	cout << fixed << setprecision(1) << numOreos << " Oreos equals " << numServings << " Oreos!" << endl;
	cout << "You consumed " << totalCalories << " calories!" << endl;
	cout << "Thank you for using our Oreo calculator!" << endl; 
 
	return 0; 
}