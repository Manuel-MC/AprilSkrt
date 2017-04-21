#include <iostream>
#include <ctime>
using namespace std;
char input;
int v1 = rand() % 5;
int main() {
	srand(time(NULL));
	cout << "(r) Rock, (p) Paper, (s) Scissors, (l) Lizard, (k) Spock" << endl;
	cout << "GO!" << endl;
	cin >> input;
	v1 = rand() % 5;
	if (input == 'r' && (v1 == 3 || v1 == 2))
		cout << "User Wins!" << endl;
	else if (input == 's' && (v1 == 3 || v1 == 1))
		cout << "User Wins" << endl;
	else if (input == 'p' && (v1 == 0 || v1 == 4))
		cout << "User Wins" << endl;
	else if (input == 'l' && (v1 == 4 || v1 == 1))
		cout << "User Wins" << endl;
	else if (input == 'k' && (v1 == 2 || v1 == 0))
		cout << "User Wins" << endl;


	if (v1 == 0) {
		if (input == 's')
			cout << "Computer wins" << endl;
		else if (input == 'l')
			cout << "Computer Wins" << endl;
	}
	if (v1 == 1) {
		if (input == 'r')
			cout << "You Suck" << endl;
		else if (input == 'k')
			cout << "You lost" << endl;
	}
	if (v1 == 2) {
		if (input == 'p')
			cout << "Computer Wins" << endl;
		else if (input == 'l')
			cout << "Computer Wins" << endl;
	}
	if (v1 == 3) {
		if (input == 'k')
			cout << "Computer Wins" << endl;
		else if (input == 'p')
			cout << "Computer Wins" << endl;
	}
	if (v1 == 4) {
		if (input == 's')
			cout << "Computer Wins" << endl;
		else if (input == 'r')
			cout << "Computer Wins" << endl;
	}
}