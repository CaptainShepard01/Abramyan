﻿#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
# include <iomanip>
#include <conio.h>
#include "MyLib.h";
using namespace std;

int menu();
int main()
{
	Matrix_20();
	/*setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0:; break;
	case 1:; break;
	case 2:; break;
	case 3:; break;
	case 4:; break;
	case 5:; break;
	case 6:; break;
	case 7:; break;
	case 8:; break;
	case 9:; break;
	case 10:; break;
	case 11:; break;
	case 12:; break;
	case 13:; break;
	case 14:; break;
	case 15:; break;
	case 16:; break;
	case 17:; break;
	case 18:; break;
		system("pause");
		return 0;
	}*/
	return 0;
}

/*int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 19) % 19;
		if (key == 0) cout << "-> Array5" << endl;
		else  cout << "   Array5" << endl;
		if (key == 1) cout << "-> Array10" << endl;
		else  cout << "   Array10" << endl;
		if (key == 2) cout << "-> Array15" << endl;
		else  cout << "   Array15" << endl;
		if (key == 3) cout << "-> Array20" << endl;
		else  cout << "   Array20" << endl;
		if (key == 4) cout << "-> Array26" << endl;
		else  cout << "   Array26" << endl;
		if (key == 5) cout << "-> Array39" << endl;
		else  cout << "   Array39" << endl;
		if (key == 6) cout << "-> Array52" << endl;
		else  cout << "   Array52" << endl;
		if (key == 7) cout << "-> Array57" << endl;
		else  cout << "   Array57" << endl;
		if (key == 8) cout << "-> Array63" << endl;
		else  cout << "   Array63" << endl;
		if (key == 9) cout << "-> Array70" << endl;
		else  cout << "   Array70" << endl;
		if (key == 10) cout << "-> Array100" << endl;
		else  cout << "   Array100" << endl;
		if (key == 11) cout << "-> Array108" << endl;
		else  cout << "   Array108" << endl;
		if (key == 12) cout << "-> Array112" << endl;
		else  cout << "   Array112" << endl;
		if (key == 13) cout << "-> Array117" << endl;
		else  cout << "   Array117" << endl;
		if (key == 14) cout << "-> Array125" << endl;
		else  cout << "   Array125" << endl;
		if (key == 15) cout << "-> Array130" << endl;
		else  cout << "   Array130" << endl;
		if (key == 16) cout << "-> Array132" << endl;
		else  cout << "   Array132" << endl;
		if (key == 17) cout << "-> Array135" << endl;
		else  cout << "   Array135" << endl;
		if (key == 18) cout << "-> Array138" << endl;
		else  cout << "   Array138" << endl;
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
}*/
