/******************************************************************************
# Author:           Corey Lee
# Assignment:       A04 (CS161A)
# Date:             April 25, 2022
# Description:      This program asks for the user to input their age group and how much 
#					tickets they want to purchase for the month. The program takes the input and 
#					checks how much the ticket will cost and the cost of tickets left to purchase to get 
#					free rides. 
# Input:            int numTickets
#				
# Output:           How much the ticket will cost depending on age and number of tickets purchased.
#					How much is left over until they receive a free ride. 
#
# Sources:			Assignment 4 guide, zybooks, sample A04, 
#******************************************************************************/


#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	char person = ' ';
	int numTickets = 0; 
	double totalCost = 0.0; 
	double freeRideCost = 0.0;

	const double ADULT = 5.25;
	const double HONORED = 2.50;
	const double YOUTH = 3.25;
	const double FREE_RIDE_YOUTH_HONORED = 28.00;
	const double FREE_RIDE_ADULT = 100.00;

	cout << "Welcome to Trimet Hop Fastpass!" << endl;
	cout << "Please choose your selection." << endl; 
	cout << "A. Adult (ages 18-64)" << endl;
	cout << "H. Honored Citizem (65+, disabilities)" << endl;
	cout << "Y. Youth (ages 7-17)" << endl;

	cout << "Note: Ride for 2 hours and 30 minutes with each ticket." << endl;
	cout << "Ride free for the rest of the month after spending $100" << endl;
	cout << "with an Adult pass, or $28 with an Honor Citizen or Youth pass!" << endl;

	cout << "Enter Fastpass(A, H, Y): "; 
	cin  >> person;
	person = tolower(person);

	if (person != 'a' && person != 'h' && person != 'y') {
		cout << "Please try again" << endl;
	}
	else {
		if (person == 'a') {
			cout << "Enter the number tickets purchased this month: ";
			cin >> numTickets;
			cout << "You have purchased " << numTickets << " tickets!" << endl;
			totalCost = static_cast<double>(numTickets) * ADULT;
			cout << fixed << setprecision(2) << "You have paid: $" << totalCost << endl;
			
			if (numTickets >= 100) {
				cout << "You have earned a free month of rides!" << endl;
			}
			else {
				freeRideCost = FREE_RIDE_ADULT - totalCost; 
				cout << fixed << setprecision(2) << "Spend $" << freeRideCost << " more to earn free rides for the month" << endl;
			}
		}

		else if (person == 'h') {
			cout << "Enter the number tickets purchased this month: ";
			cin >> numTickets;
			cout << "You have purchased " << numTickets << " tickets!" << endl;
			totalCost = static_cast<double>(numTickets) * HONORED;
			cout << fixed << setprecision(2) << "You have paid: $" << totalCost << endl;
			
			if (numTickets >= 28) {
				cout << "You have earned a free month of rides!" << endl;
			}
			else {
				freeRideCost = FREE_RIDE_YOUTH_HONORED - totalCost;
				cout << fixed << setprecision(2) << "Spend $" << freeRideCost << " more to earn free rides for the month" << endl;
			}
		}

		else if (person == 'y') {
			cout << "Enter the number tickets purchased this month: ";
			cin >> numTickets;
			cout << "You have purchased " << numTickets << " tickets!" << endl;
			totalCost = static_cast<double>(numTickets) * YOUTH;
			cout << fixed << setprecision(2) << "You have paid: $" << totalCost << endl;
			
			if (totalCost >= 28) {
				cout << "You have earned a free month of rides!" << endl;
			}
			else {
				freeRideCost = FREE_RIDE_YOUTH_HONORED - totalCost;
				cout << fixed << setprecision(2) << "Spend $" << freeRideCost << " more to earn free rides for the month" << endl;
			}
		}
	}
	
	return 0; 
}