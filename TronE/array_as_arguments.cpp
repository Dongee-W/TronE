# include "array_as_arguments.h"
# include <iostream>
using namespace std;

void PrintArray(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}