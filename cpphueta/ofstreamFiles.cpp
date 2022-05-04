#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string path;
	char cans;
	bool bans = true;
	cout << "NAME YOUR FILE: ";
	cin >> path;
	ofstream port;
	port.open(path + ".txt", ofstream::app);

	if (port.is_open()) {
		do {
			cout << "DO YOU WANT TO TYPE SMTH?: Y/N: ";
			cin >> cans;
			if (cans == 'Y' || cans == 'y') {
				cout << "PRINT THE TEXT " << endl;
				for (int row = 0; row < 10; row++) {
					string text;
					cin >> text;
					port << text << endl;
				}
			}
			else
				bans = false;
		} while (bans);
	}
	else {
		cout << "ERROR";
	}
	port.close();
}
