#include <iostream>

using namespace std;

int main() {

	double num;
	double sum = 0;
	cout << "Enter number(s):\n";
	do {
		cin >> num;
		sum = sum + num;
	} while (num != 0);

	cout << "The result is " << sum;

	return 0;
}