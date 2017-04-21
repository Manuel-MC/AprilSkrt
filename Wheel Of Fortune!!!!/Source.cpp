#include <iostream>
using namespace std;
int main() {
	char input;
	int turns = 7;
	char array1[9]={ 'm','i','n','e','c','r','a','f','t' };
	char guess[9]= { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	bool gg = false;
	cout << "Welcome to Wheel Of Fortune" << endl;
	cout << "This is a 9 letter word" << endl;

	
	while (turns > 0){
		gg = false;
		cout << " You have " << turns << " left" << endl;
		cout << "Give me a letter" << endl;
		cin >> input;
		for (int i = 0; i < 9;i++)
			if (input == array1[i]) {
				guess[i] = input;
				gg = true;
			}

			if(gg==false) {
				cout << "sorry, " << input << " is not in the word" << endl;
				turns--;
			}
		cout << "your word is so far:    " << endl;

		for (int i = 0;i < 9; i++)
			cout << guess[i];
		}

 }