#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{

	string path2 = "hren.txt";

	ifstream fin2;
	fin2.open(path2);

	if (!fin2.is_open()) {
		cout << "error";
	}
	else {
		string str;
		while (!fin2.eof())		// while there are files = false
		{
			getline(fin2, str);		// prints the whole line
			cout << str << endl;
		}
	}

	fin2.close();
}
