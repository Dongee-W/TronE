# include <iostream>
#include <string>
# include "intro_cpp.h"
using namespace std;

int HelloWorld(void)
{
	cout << "Welcome into tron!!";
	return 0;
}

int CoutObject(void)
{
	cout << "The following items were top sellers" << endl;
	cout << "during the month of June" << endl;
	return 0;
}

void NumberSize()
{
	short num_short;
	int num_int;
	long num_long;
	float num_float;
	double num_double;
	long double num_ld;

	cout << "Size of short number: " << sizeof(num_short) << endl;
	cout << "Size of int number: " << sizeof(num_int) << endl;
	cout << "Size of long number: " << sizeof(num_long) << endl;
	cout << "Size of float number: " << sizeof(num_float) << endl;
	cout << "Size of double number: " << sizeof(num_double) << endl;
	cout << "Size of ld number: " << sizeof(num_ld) << endl;
}

void StringTest()
{
	string movieTitle;
	movieTitle = "Tron - the legacy";
	cout << "My favorite movie is " << movieTitle << endl;
}