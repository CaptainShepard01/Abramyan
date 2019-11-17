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
	int answer = menu();
	switch (answer)
	{
	case 0:File_3(); break;
	case 1:File_10(); break;
	case 2:File_25(); break;
	case 3:File_48(); break;
	case 4:File_58(); break;
	case 5:File_74(); break;
	case 6:File_80(); break;
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
		key = (key + 7) % 7;
		if (key == 0) cout << "-> File_3" << endl;
		else  cout << "   File_3" << endl;
		if (key == 1) cout << "-> File_10" << endl;
		else  cout << "   File_10" << endl;
		if (key == 2) cout << "-> File_25" << endl;
		else  cout << "   File_25" << endl;
		if (key == 3) cout << "-> File_48" << endl;
		else  cout << "   File_48" << endl;
		if (key == 4) cout << "-> File_58" << endl;
		else  cout << "   File_58" << endl;
		if (key == 5) cout << "-> File_74" << endl;
		else  cout << "   File_74" << endl;
		if (key == 6) cout << "-> File_80" << endl;
		else  cout << "   File_80" << endl;
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