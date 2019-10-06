#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
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
		system("pause");
		return 0;
	}
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 15) % 15;
		if (key == 0) cout << "-> Series" << endl;
		else  cout << "   Series" << endl;
		if (key == 1) cout << "-> Proc" << endl;
		else  cout << "   Proc" << endl;
		if (key == 2) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
		if (key == 3) cout << "-> Series" << endl;
		else  cout << "   Series" << endl;
		if (key == 4) cout << "-> Proc" << endl;
		else  cout << "   Proc" << endl;
		if (key == 5) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
		if (key == 6) cout << "-> Series" << endl;
		else  cout << "   Series" << endl;
		if (key == 7) cout << "-> Proc" << endl;
		else  cout << "   Proc" << endl;
		if (key == 8) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
		if (key == 9) cout << "-> Series" << endl;
		else  cout << "   Series" << endl;
		if (key == 10) cout << "-> Proc" << endl;
		else  cout << "   Proc" << endl;
		if (key == 11) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
		if (key == 12) cout << "-> Proc" << endl;
		else  cout << "   Proc" << endl;
		if (key == 13) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
		if (key == 14) cout << "-> MinMax" << endl;
		else  cout << "   MinMax" << endl;
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



