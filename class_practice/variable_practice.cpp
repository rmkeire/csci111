# include <ostream> // allows use of cout, endl, cin

using namespace std; // not have to use std::

int main() {
	// type identifier (name)
	int height = 0;
	int width = 0;
	int depth = 0;
	int volume = 0;

	height = 10;
	width = 6;
	height = 7;
	
	cout << "My value: " <<height << endl;

	cin >> height;

	cout << height;
	
	return 0;
}
