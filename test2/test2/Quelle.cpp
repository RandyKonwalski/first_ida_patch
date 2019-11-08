#include <string>
#include <iostream>

using namespace std;

void main() {
	string key = "AAAA-BBBB-CCCC-DDDD";
	string usekey = "";
	cout << "Please Enter Key: ";
	cin >> usekey;
	if (usekey == key) {
		cout << endl << "Access Granted!" << endl;
	} else {
		cout << endl << "Access Denied!" << endl;
	}
	system("pause");
}