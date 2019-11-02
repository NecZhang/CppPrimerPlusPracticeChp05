#include <iostream>
#include <string>

using namespace std;

int main() {

	string mon[] = {
		"Jan.",
		"Feb.",
		"Mar.",
		"Apr.",
		"May.",
		"Jun.",
		"Jul.",
		"Aug.",
		"Sep.",
		"Oct.",
		"Nov.",
		"Dec."
	};
	string year[] = {
		"The first year",
		"The second year",
		"The third year"
	};
	int sold[3][12];
	int sumY[3]{0, 0, 0};
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		cout << year[i] << ":\n";
		for (int j = 0; j < 12; j++) {
			cout << "In " << mon[j] << ",";
			cout << "enter the number of sold books: ";
			cin >> sold[i][j];
			sumY[i] = sumY[i] + sold[i][j];
		}
		cout << "The number sold in the whole year is " << sumY[i] << "." << endl;
		sum = sum + sumY[i];
	}
	cout << "The number sold in the three year is " << sum << "." << endl;

	return 0;
}