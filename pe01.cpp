#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int scissor = 1;
	int paper = 2;
	int rock = 0;
	int comp = 0; 
	string name = " "; 
	char play = ' ';


	cout << "Welcome to the Rock, Paper, Scissor game! \n" << endl;
	cout << "Enter player name: \n" << endl;
	getline(cin, name);
	cin.clear();
	cout << "What is your play " << name << "?" << endl;
	cout << "Enter r, p, or s: " << endl; 
	cin.get(play);
	cin.ignore(100, '\n');

	if (play != tolower('r') || play != tolower('p') || play != tolower('s') {
		cout << "Please try again" << endl;
	}
	else {
		comp = (rand() % 2);
		cout << "comp" << endl;
	}


	return 0; 
}