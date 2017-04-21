#include <iostream>
using namespace std;
int num;
char input;
double csum;
double fsum;
double ksum;
int main(){

	cout << "Pick the temperature" << endl;
	cout << "And the temparature scale Fahrenheit(f), Celsius(c), Kelvin (k)" << endl;
	cin >> num;
	cin >> input;
	if (input == 'c') {
		fsum = num*1.8 + 32;
		cout << "" << fsum << " Farenheit" << endl;
		ksum = num + 273.15;
		cout << "" << ksum << " Kelvin" << endl;
	}
	if (input == 'f') {
		csum = (num - 32) * 5 / 9;
		cout << "" << csum << " Celsius" << endl;
		ksum = (num + 459.67) * 5 / 9;
		cout << "" << ksum << " Kelvin" << endl;
	}

	if (input == 'k') {
		fsum = num * 9 / 5 - 459.67;
		cout << "" << fsum << " Farenheit" << endl;
		csum = num - 273.15;
		cout << "" << csum << " Celsius" << endl;
	}
}