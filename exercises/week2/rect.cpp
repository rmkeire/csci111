# include <iostream>

using namespace std;

int main(){

	// Variables to determine area

	int width = 0;
	int height = 0;
	int area = 0;
	
	// Ask the user for input
	
	cout << "Enter the height:" << endl;
	cin >> height;

	cout << "Enter the width:" << endl;
	cin >> width;

	// Calculate area

	area = width * height;

	// Output
	
	cout << "The area of the rectangle is " << area <<endl;	

	return 0;
}
