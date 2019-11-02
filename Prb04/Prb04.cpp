#include <iostream>

using namespace std;

int main() {

	double moneyD = 100;
	double moneyC = 100;
	int year = 0;

	while (moneyC <= moneyD) {
		moneyC = 1.05 * moneyC;
		moneyD = 10 + moneyD;
		year++;
	}

	cout << "After " << year << " Cleo' money will exceed Daphne's." << endl;
	cout << "Cleo own $" << moneyC << endl;
	cout << "Daphne own $" << moneyD << endl;

	return 0;
}