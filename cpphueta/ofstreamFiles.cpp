#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string path;
	cin >> path;

	ofstream fort;
	fort.open(path + ".txt", ofstream::app);	// create file , do not erase old info

	if (!fort.is_open()) {		// whether file opened
		cout << "ERROR" << endl;
	}
	else {
		fort << "542";		// insert new info to file
	}

	fort.close();		// clean the memory
}
