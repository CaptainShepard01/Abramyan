#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <conio.h>
#include "MyLib.h";
using namespace std;

int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0:Matrix_2(); break;
	case 1:Matrix_10(); break;
	case 2:Matrix_15(); break;
	case 3:Matrix_20(); break;
	case 4:Matrix_35(); break;
	case 5:Matrix_46(); break;
	case 6:Matrix_50(); break;
	case 7:Matrix_65(); break;
	case 8:Matrix_62(); break;
	case 9:Matrix_83(); break;
		system("pause");
		return 0;
	}
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
