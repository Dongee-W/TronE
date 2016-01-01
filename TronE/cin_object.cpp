# include <iostream>
# include "intro_cpp.h"
using namespace std;

void CalculateArea(void)
{
	int length, width, area;
	cout << "What is the length of the rectangle? ";
	cin >> length;
	cout << "What is the width of the rectangle? ";
	cin >> width;

	area = length * width;
	cout << "Result: " << area;
}

void CalculateArea2(void)
{
	int length, width, area;
	cout << "What is the length and width of the rectangle? ";
	cin >> length >> width;

	area = length * width;
	cout << "Result: " << area;
}