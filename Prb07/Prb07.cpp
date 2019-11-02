#include <iostream>
#include <string>

using namespace std;

struct car {
	string producer;
	int year;
};

int main() {
	
	int carNum;
	cout << "How many cars do you wish to catalog? ";
	cin >> carNum;
	cin.get();
	car* pt = new car[carNum];
	
	for (int i = 0; i < carNum; i++) {
		cout << "Car #" << i + 1 << " :\n";

		cout << "Please enter the make: ";
		getline(cin, pt[i].producer);

		cout << "Please enter the year made: ";
		(cin >> pt[i].year).get();
	}

	cout << "Here is your collection:\n";

	for (int i = 0; i < carNum; i++) {
		cout << pt[i].year << " " << pt[i].producer << endl;
	}

	delete[] pt;

	return 0;
}