# include <iostream>

using namespace std;

int main(){

	double celsius = 0;
	double fahrenheit = 0;

	// Input
	cout << "Enter the temp in Celsius:" << endl;
	cin >> celsius;

	// Conversion
	fahrenheit = celsius * (9.0/5.0) + 32;

	// Output
	cout << "The equivalent fahrenheit temperature is: " << fahrenheit << endl;

	return 0;
}
