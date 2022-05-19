#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>

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

	if (!play == tolower('r') || !play == tolower('p') || !play == tolower('s')) {
		cout << "Please try again" << endl;
	}
	else if (play == tolower('r') || play == tolower('p') || play == tolower('s')) {
		srand(time(0));
		comp = (rand() % 3) -0;
		cout << "Computer plays " << comp << endl;
	}
	

	if (play == tolower('r')) {
		play = 0;
	}
	else if (play == tolower('p')) {
		play = 2;
	}
	else if (play == tolower('s')) {
		play = 1;
	}


	if (comp > play) {
		cout << "You Lose! \n" << endl;
	}
	else if (comp == play) {
		cout << "It's a tie! \n" << endl;
	}
	else if (play > comp) {
		cout << "You Win! \n" << endl;
	}

	cout << "Thank you for playing!" << endl;
	return 0;
}