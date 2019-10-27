#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
# include <windows.h>
#include <conio.h>
#include "Header.h";
using namespace std;

/*String4. Дано целое число N (1 ≤ N ≤ 26). Вывести N первых прописных (то есть заглавных) букв латинского алфавита.*/

int String_4()
{
	cout << "There is int N (1<=N<=26). Show N first symbols of latin alphabet.\n";
	int n;
	cout << "Enter N:\n";
	do
	{
		cin >> n;
	} while (n < 1 || n >26);
	for (char c = 'A'; c < 'A' + n; ++c) {
		cout << c << " ";
	}
	cout << endl;
	return 0;
}

/*String6. Дан символ C, изображающий цифру или букву (латинскую или рус-скую). Если C изображает цифру, то вывести строку «digit», если латин-скую букву — вывести строку «lat», если русскую — вывести строку «rus».*/

int String_6()
{
	cout << "There is a char C. Print if it is a digit, latin or rus.\n";
	char c;
	cout << " Enter C:\n";
	cin >> c;
	if (isdigit(c)) cout << "digit\n";
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))cout << "latin\n";
	if (c >= 192 && c <= 255)cout << "rus\n";
	return 0;
}

/*String11. Дана непустая строка S. Вывести строку, содержащую символы стро-ки S, между которыми вставлено по одному пробелу.*/

int String_11()
{
	cout << "There is not empty string S. Show string with symbols, which are devided by one space.\n";
	char string[500];
	gets_s(string);
	for (int i = 0; i < strlen(string); i += 2)	cout << string[i] << " " << string[i + 1] << " ";
	cout << endl;
	return 0;
}

/*String17. Дана строка. Преобразовать в ней все строчные буквы (как латинские, так и русские) в прописные.*/

int String_17()
{
	cout << "There is a string. Turn all str symbols into PROPISNIE.\n";
	char s[500];
	gets_s(s);
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] >= 97 && s[i] <= 122)s[i] -= 32;
		if (s[i] >= 224 && s[i] <= 255)s[i] -= 32;
	}
	cout << s;
	cout << endl;
	return 0;
}

/*String23. Дана строка, изображающая арифметическое выражение вида «<циф-ра>±<цифра>±…±<цифра>», где на месте знака операции «±» находится символ «+» или «–» (например, «4+7–2–8»). Вывести значение данного выражения (целое число).*/

int String_23()
{
	cout << "There is a string which is an arithmetic expression <digit> +- <digit> +- ... +- <digit>, show the result of this arithmetic expression.\n";
	char s[500];
	gets_s(s);
	int k = s[0];
	bool sign = 0;
	for (int i = 1; i < strlen(s); ++i) {
		if (s[i] == 43)sign = 1;
		if (s[i] == 45)sign = 0;
		if ((s[i] >= 48 && s[i] <= 57) && sign == 1)k += s[i];
		if ((s[i] >= 48 && s[i] <= 57) && sign == 0)k -= s[i];
	}
	cout << endl;
	cout << k << endl;
	return 0;
}

/*String24. Дана строка, изображающая двоичную запись целого положительного числа. Вывести строку, изображающую десятичную запись этого же числа.*/

int String_24()
{
	cout << "There is a string, which is a binary notation of the digit, show the decimal notation of this digit.\n";
	char s[500];
	gets_s(s);
	char a[500];
	for (int i = 0; i < strlen(s); ++i) {
		a[strlen(s) - 1] = s[i];
	}
	int result = 0;
	for (int i = 0; i < strlen(s); ++i) {
		result += a[i] * pow(2, i);
	}
	cout << result << endl;
	return 0;
}

/*String26. Дано целое число N (> 0) и строка S. Преобразовать строку S в строку длины N следующим образом: если длина строки S больше N, то отбросить первые символы, если длина строки S меньше N, то в ее начало добавить символы «.» (точка).*/

int String_26()
{
	cout << "There is an integer N (>0) and string S. Turn S into string of length N the next way: if length of S is more than N, show last symbols, without (length of S - N) symbols, if length of S is less of N, add dots at the beginning of the string.\n";
	char s[500], a[500];
	gets_s(s);
	int n;
	cout << "Enter N:\n";
	cin >> n;
	if (strlen(s) > n)for (int i = n; i < strlen(s); ++i)cout << s[i];
	if (strlen(s) < n) {
		for (int i = 0; i < n - strlen(s); ++i) a[i] = '.';
		for (int i = n - strlen(s); i < n; ++i) strcpy_s(a, s);
		cout << a << endl;
	}
	cout << endl;
	return 0;
}

/*String30. Дан символ C и строки S, S0. После каждого вхождения символа C в строку S вставить строку S0.*/

int String_30()
{
	cout << "There is a char C and a strings S, S0. After every C in string S insert string S0.\n";
	char c;
	char s[500], s0[500];
	cout << "Enter char C:\n";
	cin >> c;
	cout << "Enter string S:\n";
	gets_s(s);
	cout << "Enter string S0:\n";
	gets_s(s0);
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] == c)cout << s[i] << s0;
		else cout << s[i];
	}
	cout << endl;
	return 0;
}

/*String39. Дана строка, содержащая по крайней мере один символ пробела. Вы-вести подстроку, расположенную между первым и вторым пробелом ис-ходной строки. Если строка содержит только один пробел, то вывести пус-тую строку.*/

int String_39()
{
	cout << "There is a string, which contains at least 1 space symbol. Show string, which located between first and second space symbols of the origin string. If there is only 1 space symbol, show an empty string.\n";
	char s[500];
	cout << "Enter string S:\n";
	gets_s(s);
	char a[500];
	int k = 0, l = 0;
	for (int i = 0; i < strlen(s); ++i) {
		if (isspace(s[i])) { k = i; continue; }
		else {
			cout << "empty\n"; return 0;
		}
	}
	for (int i = k + 1; i < strlen(s); ++i) {
		if (isspace(s[i])) {
			l = i;
			continue;
		}
		else {
			cout << "empty\n";
			return 0;
		}
	}
	for (int i = k + 1; i < l + 1; ++i) {
		a[i - k - 1] = s[i];
	}
	cout << a << endl;
	return 0;
}

/*String45. Дана строка, состоящая из русских слов, разделенных пробелами (од-ним или несколькими). Найти длину самого короткого слова.*/

int String_45()
{
	setlocale(LC_ALL, "Russian");
	cout << "There is a string, which contains rus words, devided by spaces (1 or several). Show the length of the shortest word.\n";
	char s[500];
	cout << "Enter string:\n";
	gets_s(s);
	int length = 0, minlength = strlen(s);
	for (int i = 0; i < strlen(s) + 1; ++i) {
		if (!isspace(s[i])) length++;
		if (isspace(s[i]) && length <= minlength)minlength = length;
	}
	cout << minlength << endl;
	return 0;
}

/*String48. Дана строка, состоящая из русских слов, набранных заглавными бук-вами и разделенных пробелами (одним или несколькими). Преобразовать каждое слово в строке, заменив в нем все последующие вхождения его первой буквы на символ «.» (точка). Например, слово «МИНИМУМ» надо
преобразовать в «МИНИ.У.». Количество пробелов между словами не из-менять.*/

int String_48()
{
	setlocale(LC_ALL, "Russian");
	cout << "String of rus words, every next insertion of the symbol in the word change into '.'\n";
	char s[500];
	cout << "Enter string:\n";
	gets_s(s);
	for (int i = 0; i < strlen(s); ++i) {
		if (!isspace(s[i])) {
			for (int j = i + 1; j < strlen(s); ++i) {
				if (!isspace(s[i + 1])) {
					if (s[j] == s[i])s[j] = '.';
				}
				else {
					if (s[j] == s[i]) {
						s[j] = '.';
						continue;
					}
				}
			}
		}
	}
	return 0;
}

/*String53. Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке знаков препинания.*/

int String_53()
{
	setlocale(LC_ALL, "Russian");
	cout << "There is a string-sentense in russian. Show the number of deviding symbols.\n";
	char s[500];
	cout << "Enter string:\n";
	gets_s(s);
	int count = 0;
	for (int i = 0; i < strlen(s); ++i) {
		if (s[i] == 33 || s[i] == 44 || s[i] == 46 || s[i] == 63 || s[i] == 58 || s[i] == 59 || s[i] == 45)count++;
	}
	cout << "There are " << count << " deviding symbols in this string.\n";
	return 0;
}

/*String62. Дана строка-предложение на русском языке. Зашифровать ее, выпол-нив циклическую замену каждой буквы на следующую за ней в алфавите и сохранив при этом регистр букв («А» перейдет в «Б», «а» — в «б», «Б» — в «В», «я» — в «а» и т. д.). Букву «ё» в алфавите не учитывать («е» должна переходить в «ж»). Знаки препинания и пробелы не изменять.*/

int String_62()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << "There is a sentence in russian. Encrypt it cyclicaly.\n";
	char s[500];
	cout << "Enter origin string:\n";
	gets_s(s);
	cout << "Encrypted string: \n";
	for (int i = 0; i < strlen(s); ++i) {
		if ((s[i] >= 192 && s[i] <= 222) || (s[i] >= 224 && s[i] <= 254))s[i] = s[i] + 1;
		if (s[i] == 223)s[i] = 192;
		if (s[i] == 255)s[i] = 224;
		cout << s[i];
	}
	cout << endl;
	return 0;
}

/*String63. Дана строка-предложение на русском языке и число K (0 < K < 10). Зашифровать строку, выполнив циклическую замену каждой буквы на бу-кву того же регистра, расположенную в алфавите на K-й позиции после шифруемой буквы (например, для K = 2 «А» перейдет в «В», «а» — в «в», «Б» — в «Г», «я» — в «б» и т. д.). Букву «ё» в алфавите не учитывать, зна-ки препинания и пробелы не изменять.*/

int String_63()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << "There is a string in russian, digit K (0<K<10). Encrypt string with moving every symbol in ASCII, do not change the register.\n";
	char s[500];
	int k;
	cout << "Enter string:\n";
	gets_s(s);
	cout << "Enter K:\n";
	cin >> k;
	for (int i = 0; i < strlen(s); ++i) {
		if ((s[i] + k) > 223 || (s[i] + k) > 255) {
			s[i] = s[i] + k - 32;
		}
		else s[i] = s[i] + k;
	}
	cout << "Encrypted string:\n" << s << endl;
	return 0;
}

/*String66. Дана строка-предложение. Зашифровать ее, поместив вначале все символы, расположенные на четных позициях строки, а затем, в обратном порядке, все символы, расположенные на нечетных позициях (например, строка «Программа» превратится в «ргамамроП»).*/

int String_66()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << "There is a string. Encrypt it, place at first all the symbols on the (%2==0) positions and than in reverse symbols on (%2==1) positions.\n";
	char s[500], a[500];
	cout << "Enter string:\n";
	gets_s(s);
	int k = strlen(s);
	cout << "New string:\n";
	for (int i = 0; i < strlen(s); ++i) {
		if (i % 2 == 1) {
			cout << s[i];
		}
	}
	for (int i = strlen(s)-1; i >= 0; --i) {
		if (i % 2 == 0) {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}