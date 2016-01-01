# include <iostream>
# include <iomanip> // Header file needed to use setw
# include "formatting_output.h"
using namespace std;

void SettingFormat(void)
{
	int r1c1 = 123;
	int r1c2 = 10;
	int r2c1 = 1000;
	int r2c2 = 7;

	cout << setw(5) << r1c1 << " " << setw(5) << r1c2 << endl;
	cout << setw(5) << r2c1 << " " << setw(5) << r2c2 << endl; 
	return;
}

void SettingPrecision(void)
{
	double infinite = 10.0 / 3;

	cout << setprecision(3) << infinite << endl;
	cout << setprecision(8) << infinite << endl;

	return;
}
