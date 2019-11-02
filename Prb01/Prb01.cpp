#include <iostream>

using namespace std;

int main() {

	int i, j;
	int sum = 0;
	cout << "Enter two integer numbers\nThe first one: ";
	cin >> i;
	cout << "The second one: ";
	cin >> j;

	for (i; i <= j; i++) {
		sum += i;
	}

	cout << "The result is " << sum << endl;

	return 0;
}