#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int distance1 = 0;
	int distance2 = 0; 
	int distance3 = 0;
	string city1 = " ";
	string city2 = " ";
	string city3 = " "; 
	const int NUM_CITIES = 3;

	cout << "Distance from Portland Program! \n" << endl; 
	
	cout << "Enter city 1: " << endl;
	getline(cin, city1); 
	cout << "How many kilometers is " << city1 << " from Portland?" << endl;
	cin >> distance1;
	cin.clear();
	cin.ignore(100, '/n');
	
	cout << "Enter city 2: " << endl;
	getline(cin, city2);
	cout << "How many kilometers is " << city2 << " from Portland?" << endl;
	cin >> distance2;
	cin.clear();
	cin.ignore(100, '/n');
	
	cout << "Enter city 3: " << endl;
	getline(cin, city3);
	cout << "How many kilometers is " << city3 << " from Portland?" << endl;
	cin >> distance3;
	cin.clear();
	cin.ignore(100, '/n');


	return 0;
}