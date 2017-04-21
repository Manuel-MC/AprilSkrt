#include <iostream>
#include<Windows.h>
using namespace std;
void sauce();
int main() {
	
	while (1) {
		sauce();
		system("pause");
	}
}
void sauce() {
	int sauce = rand() % 100 + 1;
	if (sauce <= 25) {
		system("color 19");
	}
	else if (sauce > 25 && sauce <= 50) {
		system("color 2a");
	}
	else if (sauce > 50 && sauce <= 100) {
		system("color 4c");
	}
}