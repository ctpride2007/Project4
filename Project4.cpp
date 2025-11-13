/*
*Carter Pride
* Professor Schaffner
* Write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B.
Note – Pattern A will appear first in the output, followed by Pattern B.
* 11/2025
*/

#include <iostream>

using namespace std;

int main()
{
	cout << " Patteern A" << endl;

	for (int row = 1; row <= 10; ++row) {
		for (int col = 0; col < row; ++col) {
			cout << '+';
		}
		cout << endl;
	}

	cout << endl;

	cout << " Pattern B" << endl;

	for (int row = 10; row >= 1; --row) {
		for (int col = 0; col < row; ++col) {
			cout << '+';
		}
		cout << endl;
	}
	return 0;
}
