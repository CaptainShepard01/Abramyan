#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <conio.h>
#include "MyLib.h";
using namespace std;

/*Matrix2. Даны целые положительные числа M и N. Сформировать целочислен-ную матрицу размера M × N, у которой все элементы J-го столбца имеют значение 5·J (J = 1, …, N).*/

int Matrix_2()
{
	int str, stlb;
	cout << "Enter M and N (columns and stolbics):" << endl;
	cin >> str >> stlb;
	int** p = new int* [str];
	for (int i = 0; i < str; ++i) {
		p[i] = new int[stlb];
	}
	for (int i = 0; i < str; ++i) {
		for (int j = 0; j < stlb; ++j) {
			p[i][j] = 5 * j;
		}
	}
	for (int i = 0; i < str; ++i) {
		for (int j = 0; j < stlb; ++j) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < str; ++i) {
		delete[]p[i];
	}
	delete[]p;
	return 0;
}

/*Matrix10. Дана матрица размера M × N. Вывести ее элементы, расположенные в столбцах с нечетными номерами (1, 3, …). Вывод элементов производить по столбцам, условный оператор не использовать.*/

int Matrix_10()
{
	int str, stlb;
	cout << "Enter M and N (columns and stolbics):" << endl;
	cin >> str >> stlb;
	int** p = new int* [str];
	for (int i = 0; i < str; ++i) {
		p[i] = new int[stlb];
	}
	cout << "Elements of the Matrix:\n";
	for (int i = 0; i < str; ++i) {
		for (int j = 0; j < stlb; ++j) {
			cin >> p[i][j];
		}
	}
	for (int i = 0; i < str; ++i) {
		for (int j = 1; j < stlb; j += 2) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < str; ++i) {
		delete[]p[i];
	}
	delete[]p;
	return 0;
}

/*Matrix15. Дана квадратная матрица A порядка M (M — нечетное число). Начи-ная с элемента A1,1 и перемещаясь по часовой стрелке, вывести все ее эле-менты по спирали: первая строка, последний столбец, последняя строка в обратном порядке, первый столбец в обратном порядке, оставшиеся эле-менты второй строки и т. д.; последним выводится центральный элемент матрицы.*/

int Matrix_15()
{
	int m;
	cout << "Enter the order of the square matrix:\n";
	cin >> m;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[m];
	}
	cout << "Elements of the Matrix:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < m; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	for (int k = 0, z = m; k <= z; ++k, --z) {
		for (i = k; i < z; ++i) {
			cout << p[0][i] << " ";
		}
		cout << endl;

		for (i = k; i < z; ++i) {
			cout << p[i][m - 1] << endl;
		}

		for (i = z - 1; i >= k; --i) {
			cout << p[m - 1][i] << " ";
		}
		cout << endl;
		for (i = z - 1; i >= k; --i) {
			cout << p[i][0] << endl;
		}
	}
	for (int i = 0; i < m; ++i) {
		delete[]p[i];
	}
	delete[]p;
	return 0;
}

/*Matrix20. Дана матрица размера M × N. Для каждого столбца матрицы найти произведение его элементов.*/

int Matrix_20()
{
	int m, n;
	cout << "Enter M and N (columns and stolbics):\n";
	cin >> m >> n;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[n];
	}
	cout << "Elements:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	int* proizv = new int[n];
	for (i = 0; i < n; ++i) {
		proizv[i] = p[0][i];
	}
	for (i = 1; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			proizv[j] *= p[i][j];
		}
	}
	cout << "Proizvedenie kazhdogo stolbza = \n";
	for (i = 0; i < n; ++i) {
		cout << proizv[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < m; ++i) {
		delete[]p[i];
	}
	delete[]p;
	delete[]proizv;
	return 0;
}

/*Matrix35. Дана целочисленная матрица размера M × N. Найти номер первого из ее столбцов, содержащих только нечетные числа. Если таких столбцов нет, то вывести 0.*/

int Matrix_35()
{
	int m, n;
	int nomer = 0;
	cout << "Enter M and N (columns and stolbics):\n";
	cin >> m >> n;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[n];
	}
	cout << "Elements:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	int* nechetnie = new int[m];
	for (i = 0; i < n; ++i) {
		if (p[0][i] % 2 == 0) nechetnie[i] = 0;
		else nechetnie[i] = 1;
	}
	for (i = 1; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			if (p[i - 1][j] % 2 == 1 && nechetnie[i - 1] != 0) {
				nechetnie[i] = 1;
			}
			else nechetnie[i] = 0;
			if (i = m - 1) {
				if (nechetnie[i] != 0) {
					nomer = i;
				}
			}
		}
	}

	cout << "Nomer pervogo stolbza s nechetnimi chislami: " << nomer;

	cout << endl;
	for (int i = 0; i < m; ++i) {
		delete[]p[i];
	}
	delete[]p;
	return 0;
}

/*Matrix46. Дана целочисленная матрица размера M × N. Найти элемент, являю-щийся максимальным в своей строке и минимальным в своем столбце. Ес-ли такой элемент отсутствует, то вывести 0.*/

int Matrix_46()
{
	int m, n;
	cout << "Enter M and N (columns and stolbics):\n";
	cin >> m >> n;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[n];
	}
	cout << "Elements:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	int elmaxmin;
	int* elmaxstr = new int[m];
	int* elminstlb = new int[n];
	for (i = 0; i < m; ++i) {
		elmaxstr[i] = p[i][0];
	}
	for (i = 0; i < n; ++i) {
		elminstlb[i] = p[0][i];
	}
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			if (p[i][j] > elmaxstr[i]) {
				elmaxstr[i] = p[i][j];
			}
			if (p[i][j] < elminstlb[j]) {
				elminstlb[j] = p[i][j];
			}
			if (elmaxstr[i] == elminstlb[j]) {
				elmaxmin = p[i][j];
			}
		}
	}
	cout << "Max v str and min v stlb: " << elmaxmin;
	delete[] elmaxstr;
	delete[] elminstlb;
	for (i = 0; i < m; ++i) {
		delete[] p[i];
	}
	delete[] p;
	cout << endl;
	return 0;
}

/*Matrix50. Дана матрица размера M × N. Преобразовать матрицу, поменяв мес-тами минимальный и максимальный элемент в каждом столбце.*/

int Matrix_50()
{
	int m, n;
	cout << "Enter M and N (columns and stolbics):\n";
	cin >> m >> n;
	int** p = new int* [m];
	int i, j, min = 0, max = 0;
	for (i = 0; i < m; ++i) {
		p[i] = new int[n];
	}
	cout << "Elements:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;

	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			if (p[i][j] > p[max][j]) max = i;
		}
	}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			if (p[i][j] < p[min][j]) min = i;
		}
	}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			int temp = p[max][j];
			p[max][j] = p[min][j];
			p[min][j] = temp;
		}
	}

	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < m; ++i) {
		delete[] p[i];
	}
	delete[] p;
	cout << endl;
	return 0;
}

/*Matrix65. Дана матрица размера M × N. Удалить ее первый столбец, содержа-щий только положительные элементы. Если требуемых столбцов нет, то вывести матрицу без изменений.*/

int Matrix_65()
{
	int m, n, l;
	cout << "Enter M and N (columns and stolbics):\n";
	cin >> m >> n;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[n];
	}
	cout << "Elements:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	int k;

	int* positive = new int[n];
	for (j = 0; j < n; ++i) {
		if (p[0][j] > 0) positive[j] = 1;
	}

	for (i = 1; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			if (p[i - 1][j] > 0 && p[i][j] > 0 && positive[j] == 1) positive[j] = 1;
			else positive[j] = 0;
			if (i == m - 1 && positive[j] == 1) {
				k = j;				
			}
		}
	}
	for (i = 0; i < m; ++i) {
		for (j = k + 1; j < n; ++j) {
			p[i][j - 1] = p[i][j];
		}
	}
	--n;
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < m; ++i) {
		delete[] p[i];
	}
	delete[] p;
	delete[] positive;
	cout << endl;
	return 0;
}

/*Matrix62. Дана матрица размера M × N и целое число K (1 ≤ K ≤ N). Удалить столбец матрицы с номером K.*/

int Matrix_62()
{
	int m, n, k;
	cout << "Enter M and N (columns and stolbics):\n";
	cin >> m >> n;
	cout << "Enter K(1 <= K <= N):\n";
	cin >> k;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[n];
	}
	cout << "Elements:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;

	for (i = k; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			p[j][i - 1] = p[j][i];
		}
	}
	n--;
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0; i < m; ++i) {
		delete[] p[i];
	}
	delete[] p;
	return 0;
}

/*Matrix80. Дана квадратная матрица A порядка M. Найти сумму элементов ее главной диагонали, то есть диагонали, содержащей следующие элементы:
A1,1, A2,2, A3,3, …, AM,M.*/

int Matrix_80()
{
	int m;
	cout << "Enter the order of the square matrix:\n";
	cin >> m;
	int** p = new int* [m];
	int i, j;
	for (i = 0; i < m; ++i) {
		p[i] = new int[m];
	}
	cout << "Elements of the Matrix:\n";
	for (i = 0; i < m; ++i) {
		for (j = 0; j < m; ++j) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	
	int sum = 0;
	for (i = 0; i < m; ++i) {
		sum += p[i][i];
	}
	cout << sum;
	for (int i = 0; i < m; ++i) {
		delete[]p[i];
	}
	delete[]p;
	return 0;
}

/**/