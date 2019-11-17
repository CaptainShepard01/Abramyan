#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include "Header.h";
using namespace std;

int menu();
int main()
{
	File_25();
	/*int answer = menu();
	switch (answer)
	{
	case 0:; break;
		system("pause");
		return 0;
	}*/
	return 0;
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 10) % 10;
		if (key == 0) cout << "-> Matrix_2" << endl;
		else  cout << "   Matrix_2" << endl;
		if (key == 1) cout << "-> Matrix_10" << endl;
		else  cout << "   Matrix_10" << endl;
		if (key == 2) cout << "-> Matrix_15" << endl;
		else  cout << "   Matrix_15" << endl;
		if (key == 3) cout << "-> Matrix_20" << endl;
		else  cout << "   Matrix_20" << endl;
		if (key == 4) cout << "-> Matrix_35" << endl;
		else  cout << "   Matrix_35" << endl;
		if (key == 5) cout << "-> Matrix_46" << endl;
		else  cout << "   Matrix_46" << endl;
		if (key == 6) cout << "-> Matrix_50" << endl;
		else  cout << "   Matrix_50" << endl;
		if (key == 7) cout << "-> Matrix_65" << endl;
		else  cout << "   Matrix_65" << endl;
		if (key == 8) cout << "-> Matrix_62" << endl;
		else  cout << "   Matrix_62" << endl;
		if (key == 9) cout << "-> Matrix_83" << endl;
		else  cout << "   Matrix_83" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}