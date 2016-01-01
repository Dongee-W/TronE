# include "array_initialization.h"
# include <string>
# include <iostream>
# include <iomanip>
using namespace std;

void ArrayInit()
{
	const int kNumMonths = 12;
	int days[kNumMonths] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	string name[kNumMonths] = { "January", "February", "March", "April",
		"May", "June", "July", "August", "September", "October", "November",
		"December"
	};

	for (int index = 0; index < kNumMonths; index++)
	{
		cout << setw(9) << left << name[index] << " has ";
		cout << days[index] << " days.\n";
	}
}