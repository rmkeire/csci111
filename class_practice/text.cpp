#include <iostream>

using namespace std;

int main(){
	
	char table = 't';
	string fire = "t";

	cout << "char table: " << table << endl;
	cout << "string fire: " << fire << endl;
	
	table = 'k';
	fire = "of space";
	
	// Math can be done on the char type
	char chair = table + 6;
	cout << chair << endl;
	
	chair -= 2;
	cout << "New char: " << chair << endl;
	return 0;
}
