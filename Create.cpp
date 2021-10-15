#include <fstream>

using namespace std;

int main()
{

	ifstream input;
	ofstream output;

	input.open("database.dat");
	

	int memberID = 0;
	char firstName[101] = { 0 };
	char lastName[101] = { 0 };
	char dateOfBirth[11] = { 0 };

	input >> memberID >> firstName >> lastName >> dateOfBirth;
	input.close();

	return 0;
}