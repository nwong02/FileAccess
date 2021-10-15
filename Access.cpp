#include <iostream>
#include <fstream>


using namespace std;

int main()
{
	cout << "Opening database.dat to append to\n";
	ofstream fout;

	fout.open("database.dat", ios::app);
	if (fout.fail())
	{
		cout << "Error, could not open file.\n";
		exit(1);
	}
	return 0;
}