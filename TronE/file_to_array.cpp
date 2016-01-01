# include "file_to_array.h"
# include <iostream>
# include <fstream>
using namespace std;

void PrintFileContent()
{
	const int kNumLines = 4;
	int lines[kNumLines];
	int count = 0;
	
	ifstream about_melissa;

	about_melissa.open("melissa_imdb.txt");
	if (!about_melissa)
		cout << "Error opening data file\n";
	else
	{
		while (count < kNumLines && about_melissa >> lines[count])
			count++;

		about_melissa.close();

		for (int employee = 0; employee < count; employee++)
		{
			cout << "Fact " << employee << ": " << lines[employee] << endl;
		}

	}
}