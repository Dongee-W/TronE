# include <iostream>
# include <cstdlib>
#include <ctime> // Header needed to use time
# include "more_math_functions.h"
using namespace std;

void RandomNumber(void)
{
	unsigned seed;
	seed = time(0);
	srand(seed);

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	return;
}

