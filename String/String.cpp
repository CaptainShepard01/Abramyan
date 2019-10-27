#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
# include <windows.h>
#include <conio.h>
#include "Header.h";
using namespace std;

int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0:String_4(); break;
	case 1:String_6(); break;
	case 2:String_11(); break;
	case 3:String_17(); break;
	case 4:String_23(); break;
	case 5:String_24(); break;
	case 6:String_26(); break;
	case 7:String_30(); break;
	case 8:String_39(); break;
	case 9:String_45(); break;
	case 10:String_48(); break;
	case 11:String_53(); break;
	case 12:String_62(); break;
	case 13:String_63(); break;
	case 14:String_66(); break;
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
		key = (key + 15) % 15;
		if (key == 0) cout << "-> String_4" << endl;
		else  cout << "   String_4" << endl;
		if (key == 1) cout << "-> String_6" << endl;
		else  cout << "   String_6" << endl;
		if (key == 2) cout << "-> String_11" << endl;
		else  cout << "   String_11" << endl;
		if (key == 3) cout << "-> String_17" << endl;
		else  cout << "   String_17" << endl;
		if (key == 4) cout << "-> String_23" << endl;
		else  cout << "   String_23" << endl;
		if (key == 5) cout << "-> String_24" << endl;
		else  cout << "   String_24" << endl;
		if (key == 6) cout << "-> String_26" << endl;
		else  cout << "   String_26" << endl;
		if (key == 7) cout << "-> String_30" << endl;
		else  cout << "   String_30" << endl;
		if (key == 8) cout << "-> String_39" << endl;
		else  cout << "   String_39" << endl;
		if (key == 9) cout << "-> String_45" << endl;
		else  cout << "   String_45" << endl;
		if (key == 10) cout << "-> String_48" << endl;
		else  cout << "   String_48" << endl;
		if (key == 11) cout << "-> String_53" << endl;
		else  cout << "   String_53" << endl;
		if (key == 12) cout << "-> String_62" << endl;
		else  cout << "   String_62" << endl;
		if (key == 13) cout << "-> String_63" << endl;
		else  cout << "   String_63" << endl;
		if (key == 14) cout << "-> String_66" << endl;
		else  cout << "   String_66" << endl;
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
