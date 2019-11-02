#include <iostream>

using namespace std;

int main(){
	
	char word[20];
	int count = 0;
	
	cout << "Enter words (to stop, tpye the word done):\n";
	
	do {
		cin >> word;
		count++;
	} while (strcmp(word, "done"));

	cout << "You entered a total of " << count - 1 << " words.";

	return 0;
}