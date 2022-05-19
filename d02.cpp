/* 
# Name				Corey Lee
# Partners			Jackie Ruiz, Hoang Le, Harrison Gregory 
# Description		Input both mpg and ppg. Given these two inputs, output 
#					the cost for 20, 75, and 500 miles. 
# Source			www.calculatorsoup.com/calculators/tools/gas-mileage-calculator.php
# Input				pricePerGallon
#					milesPerGallon
# Output			cost of 20, 75, and 500 miles. Calculated using 
#					(pricePerGallon/milesPerGallon) * X 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

int main() {
	double pricePerGallon = 0.0; 
	double milesPerGallon = 0.0;
	float twentyMiles;
	float svntyMiles;
	float fivehndrdMiles;

	cout << "Hello, please enter the price per gallon: " << endl; 
	cin  >> pricePerGallon; 
	cout << "Please enter your vehicles mpg rating: " << endl; 
	cin  >> milesPerGallon;

	twentyMiles = (pricePerGallon / milesPerGallon) * 20;
	svntyMiles = (pricePerGallon / milesPerGallon) * 75;
	fivehndrdMiles = (pricePerGallon / milesPerGallon) * 500;

	cout << "Twenty miles will cost you: $" << twentyMiles << " dollars" << 
			fixed << setprecision(2) << endl;
	cout << "Seventy five miles costs you: $" << svntyMiles << " dollars" << 
			fixed << setprecision(2) << endl;
	cout << "Five hundred miles costs you: $" << fivehndrdMiles << " dollars" <<
			fixed << setprecision(2) << endl;
	return 0;
}