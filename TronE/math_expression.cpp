# include <iostream>
# include <cmath>
# include "math_expression.h"
using namespace std;

void CircleArea(void)
{
	double area, radius;

	cout << "Radius?";
	cin >> radius;

	area = 3.14159 * pow(radius, 2);
	cout << "The area is " << area << endl;
	return;
}