/******************************************************************************
# Author:           Corey Lee
# Assignment:       A05 (CS161A)
# Date:             May 4, 2022
# Description:      This program takes in the user input of an email address and 
#					shows us username and domain name as output. 
#					size of a jar.
# Input:            string emailAddress for the whole email address
					string userName for everything before @ sign 
					string domainName for everything after @ sign 
# Output:           Output the user name and domain name without showing the @ 
#					sign. 
# Sources:          Assignment 5 specifications, c++ erase function, zybooks 5.7
#******************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string emailAddress = " ";
	string userName = " ";
	string domainName = " ";
	int findSymbol = 0; 

	cout << "Please enter your email address: " << endl;
	cin >> emailAddress; 
	cout << "You entered: " << emailAddress << endl;
	
	findSymbol = emailAddress.find('@');
	if (findSymbol == string::npos) {
		cout << "This is missing the @ sign. Please check and try again later." << endl;
	}
	else {
		userName = emailAddress.substr(0, findSymbol);
		emailAddress.erase(findSymbol, 1);
		domainName = emailAddress.substr(findSymbol);
		cout << "UserName: " << userName << endl;
		cout << "DomainName: " << domainName << endl;
	}
	cout << "Thank you for using my program!" << endl;
	return 0;
}