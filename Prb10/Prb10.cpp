#include <iostream>

using namespace std;

int main() {

	int num;

	cout << "Enter number of rows: ";
	cin >> num;

	for (int i = 0; i < num; ++i) {

		for (int j = 0; j < num - i - 1; ++j) {
			cout << '.';
		}
		
		for (int k = 0; k < i + 1; ++k) {
			cout << '*';
		}
		
		cout << "\n";
	}

	return 0;
}