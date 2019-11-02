#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	int count = 0;

	cout << "Enter words (to stop, tpye the word done):\n";

	do {
		cin >> word;
		count++;
	} while (word != "done");

	cout << "You entered a total of " << count - 1 << " words.";

	return 0;
}