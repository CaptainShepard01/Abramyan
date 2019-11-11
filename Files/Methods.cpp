#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include "Header.h";
using namespace std;

void File_3()
{
	cout << "There are float numbers A and D, create a file of float numbers with the name given and\ninsert there 10 first ariphmetical progression's characters (first character is A and the difference is D.\n";
	float a, d;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter D: ";
	cin >> d;
	cout << "Enter the file's name: ";
	char name[64];
	cin >> name;
	ofstream output(name);
	output << a << ' ';
	for (int i = 1; i < 10; ++i) {
		a += d;
		output << a << ' ';
	}
	output.close();
	ifstream input(name);
	int h;
	for (int i = 0; i < 10; ++i) {
		input >> h;
		cout << h <<' ';
	}
	input.close();
	return;
}