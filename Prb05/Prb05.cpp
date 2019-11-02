#include <iostream>
#include <string>

using namespace std;

int main() {

	int sum = 0;
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
	int sold[12];

	for (int i = 0; i < 12; i++) {
		cout << "In " << mon[i] << ",";
		cout << "enter the number of sold books: ";
		cin >> sold[i];
		sum = sum + sold[i];
	}

	cout << "The number sold in the whole year is " << sum << "." << endl;

	return 0;
}