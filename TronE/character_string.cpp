# include <iostream>
# include <string>
# include "formatting_output.h"
using namespace std;

void GetLine(void)
{
	string name, city;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter city: ";
	getline(cin, city);

	cout << "Hello " << name << " in " << city << endl;
	return;
}

void CinDotGet(void)
{
	cout << "|--------Progress 100%------------|" << endl;
	cout << "Press Enter to continue..." << endl;
	cin.get();
	cout << "Start processing part II..." << endl;
}