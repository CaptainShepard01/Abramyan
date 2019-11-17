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

void File_58()
{
	cout << "There is a file with a sring. Delete all the characters after the first space symbol (with itself).\n\n";
	FILE* f1;
	f1 = fopen("File_58", "wb+");
	int iter = 0;
	char buffer[1];
	while (!feof(f1)) {
		fread(buffer, sizeof(char), 1, f1);
		if (buffer[0] == ' ' && iter == 0) {
			cout << "Empty file.\n";
			fseek(f1, 0, SEEK_SET);
			fwrite(buffer, sizeof(char), 0, f1);
			fclose(f1);
			break;
		}
		if (buffer[0] == ' ') {
			break;
		}
		iter++;
	}
	fseek(f1, 0, SEEK_SET);
	char* temp = new char[iter + 1];
	fread(temp, sizeof(char), iter + 1, f1);
	fseek(f1, 0, SEEK_SET);
	fwrite(temp, sizeof(char), iter + 1, f1);
	fclose(f1);
	delete[] temp;
}

void File_74()
{
	setlocale(LC_ALL, "Russian");
	cout << "There are 2 integer numbers: I and J. Show A(i,j) element of matrix from file.\n\n";
	cout << "I = ";
	int k;
	cin >> k;
	cout << "J = ";
	int l;
	cin >> l;
	ifstream in("input.txt");

	if (in.is_open())
	{
		//Если открытие файла прошло успешно

		//Вначале посчитаем сколько чисел в файле
		int count = 0;// число чисел в файле
		int temp;//Временная переменная

		while (!in.eof())// пробегаем пока не встретим конец файла eof
		{
			in >> temp;//в пустоту считываем из файла числа
			count++;// увеличиваем счетчик числа чисел
		}

		//Число чисел посчитано, теперь нам нужно понять сколько
		//чисел в одной строке
		//Для этого посчитаем число пробелов до знака перевода на новую строку 

		//Вначале переведем каретку в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Число пробелов в первой строчке вначале равно 0
		int count_space = 0;
		char symbol;
		while (!in.eof())//на всякий случай цикл ограничиваем концом файла
		{
			//теперь нам нужно считывать не числа, а посимвольно считывать данные
			in.get(symbol);//считали текущий символ
			if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
			if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
		}
		//cout << count_space << endl;

		//Опять переходим в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
		//Теперь можем считать матрицу.

		int n = count / (count_space + 1);//число строк
		int m = count_space + 1;//число столбцов на единицу больше числа пробелов
		double** x;
		x = new double* [n];
		for (int i = 0; i < n; i++) x[i] = new double[m];

		//Считаем матрицу из файла
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				in >> x[i][j];

		//Выведем матрицу
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << x[i][j] << "\t";
			cout << "\n";
		}
		cout << '\n';
		if (k >= 0 && k < n && l >= 0 && l < m) {
			cout << "Element - target: ";
			cout << x[k][l] << '\n';
		}
		else cout << 0;
		for (int i = 0; i < n; i++) delete[] x[i];
		delete[] x;
		in.close();//под конец закроем файла
	}
	else
	{
		//Если открытие файла прошло не успешно
		cout << "Файл не найден.";
	}
}

void File_80()
{
	setlocale(LC_ALL, "Russian");
	cout << "There is a file with a uppertriangola matrix, create a file with a nonzero elements of this matrix.\n\n";
	ofstream out("output(matrix).txt");
	ifstream in("input.txt");

	if (in.is_open())
	{
		//Если открытие файла прошло успешно

		//Вначале посчитаем сколько чисел в файле
		int count = 0;// число чисел в файле
		int temp;//Временная переменная

		while (!in.eof())// пробегаем пока не встретим конец файла eof
		{
			in >> temp;//в пустоту считываем из файла числа
			count++;// увеличиваем счетчик числа чисел
		}

		//Число чисел посчитано, теперь нам нужно понять сколько
		//чисел в одной строке
		//Для этого посчитаем число пробелов до знака перевода на новую строку 

		//Вначале переведем каретку в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Число пробелов в первой строчке вначале равно 0
		int count_space = 0;
		char symbol;
		while (!in.eof())//на всякий случай цикл ограничиваем концом файла
		{
			//теперь нам нужно считывать не числа, а посимвольно считывать данные
			in.get(symbol);//считали текущий символ
			if (symbol == ' ') count_space++;//Если это пробел, то число пробелов увеличиваем
			if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
		}
		//cout << count_space << endl;

		//Опять переходим в потоке в начало файла
		in.seekg(0, ios::beg);
		in.clear();

		//Теперь мы знаем сколько чисел в файле и сколько пробелов в первой строке.
		//Теперь можем считать матрицу.

		int n = count / (count_space + 1);//число строк
		int m = count_space + 1;//число столбцов на единицу больше числа пробелов
		double** x;
		x = new double* [n];
		for (int i = 0; i < n; i++) x[i] = new double[m];

		//Считаем матрицу из файла
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				in >> x[i][j];

		//Выведем матрицу
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << x[i][j] << "\t";
			cout << "\n";
		}
		cout << '\n';

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (x[i][j] != 0) {
					out << x[i][j] << ' ';
				}
			}
			out << '\n';
		}
		out.close();
		for (int i = 0; i < n; i++) delete[] x[i];
		delete[] x;
		in.close();//под конец закроем файла
	}
	else
	{
		//Если открытие файла прошло не успешно
		cout << "Файл не найден.";
		return;
	}
}