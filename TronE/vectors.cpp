# include "vectors.h"
# include <iostream>
# include <vector>
using namespace std;

void PlayWithVectors()
{
	vector<int> numbers(10, 0);
	vector<int> numbers2(numbers);

	numbers2.push_back(29);
	numbers2.pop_back();

	cout << numbers2.empty();
	for (int index = 0; index < numbers2.size(); index++)
	{
		cout << numbers2[index] << " ";
	}
}