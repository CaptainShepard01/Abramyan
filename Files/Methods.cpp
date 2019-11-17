#define _CRT_SECURE_NO_WARNINGS
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
		cout << h << ' ';
	}
	input.close();
	return;
}

void File_10()
{
	cout << "There is a file of integer numbers, create new file with reverse ordinary of numbers.\n\n";
	FILE* f1 = fopen("Integer numbers", "wb+");
	int a[5];
	for (int i = 0; i < 5; ++i) {
		cin >> a[i];
	}
	int c[5];
	fwrite(a, sizeof(int), 5, f1);
	fseek(f1, 0, SEEK_SET);
	FILE* f2 = fopen("New integers", "wb+");
	fread(a, sizeof(int), 5, f1);
	fseek(f1, 0, SEEK_SET);
	int b[1];
	for (int i = 4; i >= 0; --i) {
		fseek(f1, i * sizeof(int), SEEK_SET);
		fread(&b, sizeof(int), 1, f1);
		fwrite(b, sizeof(int), 1, f2);
	}
	fseek(f2, 0, SEEK_SET);
	fread(&a, sizeof(int), 5, f2);
	fclose(f1);
	fclose(f2);
	for (int i = 0; i < 5; ++i) {
		cout << a[i] << ' ';
	}
	cout << endl;

}

void File_25()
{
	cout << "There is a file of float numbers, change all the numbers into their squares.\n\n";
	FILE* f1, * f2;
	f1 = fopen("Floats", "wb+");
	f2 = fopen("Square floats", "wb+");
	float a[3];
	for (int i = 0; i < 3; ++i) {
		cin >> a[i];
	}
	fwrite(a, sizeof(float), 3, f1);
	fseek(f1, 0, SEEK_SET);
	float b[1];
	for (int i = 0; i < 3; ++i) {
		fread(b, sizeof(float), 1, f1);
		b[0] = pow(b[0], 2);
		fwrite(b, sizeof(float), 1, f2);
	}
	fseek(f2, 0, SEEK_SET);
	fread(a, sizeof(float), 3, f2);
	fclose(f1);
	fclose(f2);
	for (int i = 0; i < 3; ++i) {
		cout << a[i] << ' ';
	}
	cout << endl;
}

void File_48()
{
	cout << "There are 3 files with the same size, create the new file with elements which are elements of the origin-files with the same numbers.\n\n";
	FILE* f1, * f2, * f3, * f4;
	f1 = fopen("Sa", "wb+");
	f2 = fopen("Sb", "wb+");
	f3 = fopen("Sc", "wb+");
	f4 = fopen("Sd", "wb+");
	int b[1];
	if (!feof(f1)) {
		fread(b, sizeof(int), 1, f1);
		fwrite(b, sizeof(int), 1, f4);
	}
	if (!feof(f2)) {
		fread(b, sizeof(int), 1, f2);
		fwrite(b, sizeof(int), 1, f4);
	}
	if (!feof(f3)) {
		fread(b, sizeof(int), 1, f3);
		fwrite(b, sizeof(int), 1, f4);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	fclose(f4);
}
