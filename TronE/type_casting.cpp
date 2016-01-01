# include <iostream>
# include "type_casting.h"
using namespace std;

void StaticCast(void)
{
	double number = 3.7;
	int val;
	val = static_cast<int>(number);

	cout << val;
	return;
}