#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <conio.h>

using namespace std;

/*Array5.Дано целое число N(> 2).Сформировать и вывести целочисленный массив размера N, содержащий N первых элементов последовательности чисел Фибоначчи FK*/

int Array5()
{
	int n, i;
	cin >> n;
	int a[100];
	a[0] = 1;
	a[1] = 1;
	for (i = 2; i < n; ++i) {
		a[i] = a[i - 2] + a[i - 1];
	}
	for (i = 0; i < n; ++i) cout << a[i] << endl;
	cout << endl;
	return 0;
}

/*Array10. Дан целочисленный массив размера . Вывести вначале все содержащиеся в данном массиве четные числа в порядке возрастания их индексов, а затем — все нечетные числа в порядке убывания их индексов.*/

int Array10()
{
	int a[100];
	int n, i;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < n; ++i)
		if (a[i] % 2 == 0) cout << a[i] << " ";
	cout << endl;
	for (i = n - 1; i >= 0; --i)
		if (a[i] % 2 != 0) cout << a[i] << endl;
	return 0;
}

/*Array15. Дан массив размера . Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров. . Условный оператор не использовать.*/

int Array15()
{
	int a[100];
	int n, i;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < n; i += 2) cout << a[i] << " ";
	for (i = n - (n % 2) - 1; i >= 1; i -= 2) cout << a[i] << endl;
	cout << endl;
	return 0;
}


/*Array20.Дан массив размера N и целые числа K и L (1<=K<=L<=N).Найти сумму элементов массива с номерами от K до L включительно.*/

int Array20()
{
	double a[100];
	int n, k, l, i;
	cout << "N = ";
	cin >> n;
	cout << "K = ";
	cin >> k;
	cout << "L = ";
	cin >> l;
	for (i = 0; i < n; ++i)cin >> a[i];
	int sum = 0;
	for (i = k - 1; i < l - 1; ++i)sum += a[i];
	cout << "Summ = " << sum << endl;
	return 0;
}

/*Array26. Дан целочисленный массив размера N. Проверить, чередуются ли в нем четные и нечетные числа. Если чередуются, то вывести 0, если нет, то вывести порядковый номер первого элемента, нарушающего закономерность.*/

int Array26()
{
	int a[100];
	int n, i;
	cout << "N = ";
	cin >> n;
	for (i = 0; i < n; ++i)cin >> a[i];
	int temp = a[0] % 2;
	for (i = 1; ((i < n) && (temp != a[i] % 2)); ++i)temp = a[i] % 2;
	if (i == n) {
		cout << "0";
	}
	else  cout << i + 1;
	cout << endl;
	return 0;
}

/*Array39. Дан массив размера N. Найти количество его промежутков монотонности (то есть участков, на которых его элементы возрастают или убывают).*/

int Array39()
{
	double a[100];
	int i, n;
	cout << "N = ";
	cin >> n;
	for (i = 0; i < n; ++i)cin >> a[i];
	int answer = 0;
	bool inc = 0;
	bool dec = 0;
	for (i = 1; i < n; ++i) {
		if (a[i] > a[i - 1] && !inc) {
			++answer;
			inc = 1;
		}
		else if (a[i] <= a[i - 1])  inc = 0;
		if (a[i] < a[i - 1] && !dec) {
			++answer;
			dec = 1;
		}
		else if (a[i] >= a[i - 1])  dec = 0;
	}
	cout << "Monotonnost' vstrechaetsya " << answer << " raz\n";
	return 0;
}


/*Array52. Дан массив A размера N. Сформировать новый массив B того же раз-мера, элементы которого определяются следующим образом:
Bk = 2 * Ak, если Ak < 5;
Bk = Ak / 2, в противном случае*/

int Array52()
{
	float a[100], b[100];
	int n, k;
	cout << "N = ";
	cin >> n;
	for (k = 0; k < n; ++k)cin >> a[k];

	for (k = 0; k < n; ++k) {
		if (a[k] < 5) b[k] = 2 * a[k];
		else b[k] = a[k] / 2;
	}

	cout << endl;
	for (k = 0; k < n; ++k) cout << b[k] << endl;
	return 0;
}

/*Array57. Дан целочисленный массив A размера N. Переписать в новый цело-численный массив B того же размера вначале все элементы исходного мас-сива с четными номерами, а затем — с нечетными:
A2, A4, A6, …, A1, A3, A5, … .*/

int Array57()
{
	float a[100], b[100];
	int n, i;
	for (i = 0; i < n; ++i)cin >> a[i];
	int k = 0;
	for (i = 0; i < n; i += 2) {
		b[k] = a[i];
		++k;
	}
	for (i = 1; i < n; i += 2) {
		b[k] = a[i];
		++k;
	}
	for (i = 0; i < k; ++i) cout << b[i] << endl;
	cout << endl;
	return 0;
}

/*Array63. Даны два массива A и B размера 5, элементы которых упорядочены по возрастанию. Объединить эти массивы так, чтобы результирующий мас-сив C (размера 10) остался упорядоченным по возрастанию.*/

int Array63()
{
	float a[5], b[5], c[10];
	int i;
	for (i = 0; i < 5; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < 5; ++i) {
		cin >> b[i];
	}
	int ia = 0, ib = 0;
	for (i = 0; i < 10; ++i) {
		if ((ia >= 5) || ((a[ia] > b[ib]) && (ib < 5))) {
			c[i] = b[ib];
			++ib;
		}
		else {
			c[i] = a[ia];
			++ia;
		}
	}
	cout << "C:\n";
	for (i = 0; i < 10; ++i)cout << c[i] << endl;
	cout << endl;
	return 0;
}


/*Array70. Дан массив размера N (N — четное число). Поменять местами первую и вторую половины массива*/

int Array70()
{
	const int c = 10;
	int i;
	float a[c], b[c];
	for (i = 0; i < c; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < c; ++i) {
		b[i] = a[i];
	}
	for (i = 0; i < (c / 2); ++i) {
		a[i] = a[(c / 2) + i];
	}
	for (i = (c / 2); i < c; ++i) {
		a[i] = b[i - (c / 2)];
	}
	return 0;
}

/*Array100. Дан целочисленный массив размера N. Удалить из массива все эле-менты, встречающиеся ровно два раза, и вывести размер полученного мас-сива и его содержимое.*/

int Array100()
{
	int c = 10;
	float a[10];
	int i;
	for (i = 0; i < c; ++i) {
		cin >> a[i];
	}
	int ai, i2, num, k;
	for (i = 0; i < c; ++i) {
		num = 0;
		for (i2 = 0; i2 < c; ++i2)if (a[i] == a[i2])++num;
		if (num == 2) {
			k = i - 1;
			ai = a[i];
			for (i2 = i; i2 < c; ++i2) {
				if (a[i2] != ai) {
					++k;
					a[k] = a[i2];
				}
			}
			c = k + 1;
			--i;
		}
	}
	cout << "Length = " << c << endl;
	cout << "Array a:" << endl;
	for (i = 0; i < c; ++i)cout << a[i] << endl;
	cout << endl;
	return 0;
}

/*Array108. Дан массив размера N. Перед каждым положительным элементом массива вставить элемент с нулевым значением.*/

int Array108()
{
	int c = 10;
	int i;
	float a[10];
	for (i = 0; i < c; ++i) {
		cin >> a[i];
	}
	int i2;
	for (i = c - 1; i >= 0; --i) {
		if (a[i] > 0) {
			++c;
			for (i2 = c - 1; i2 > i; --i2) a[i2] = a[i2 - 1];
			a[i] = 0;
		}
	}
	for (i = 0; i < c; ++i)cout << a[i] << endl;
	cout << endl;
	return 0;
}

/*Array112. Дан массив A размера N (≤ 6). Упорядочить его по возрастанию ме-тодом сортировки простым обменом («пузырьковой» сортировкой): про-сматривать массив, сравнивая его соседние элементы (A1 и A2, A2 и A3 и т. д.) и меняя их местами, если левый элемент пары больше правого; по-вторить описанные действия N – 1 раз. Для контроля за выполняемыми действиями выводить содержимое массива после каждого просмотра. Учесть, что при каждом просмотре количество анализируемых пар можно уменьшить на 1.*/

int Array112()
{
	const int n = 6;
	float a[n];
	int i;
	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int i2, i3;
	for (i = 0; i < n - 1; ++i) {
		for (i2 = i; i2 < n - 1; ++i2) {
			if (a[i2] > a[i2 + 1]) {
				a[i2] += a[i2 + 1];
				a[i2 + 1] = a[i2] - a[i2 + 1];
				a[i2] -= a[i2 + 1];
			}
		}
	}
	for (i3 = 0; i3 < n; ++i3)cout << a[i3] << endl;
	cout << endl;
	return 0;
}


/*Array117. Дан целочисленный массив размера N. Вставить перед каждой его серией элемент с нулевым значением.*/

int Array117()
{
	int n;
	cout << "N = ";
	cin >> n;
	float a[6], b[6];
	int i;
	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int k = 1;
	b[0] = 0;
	b[k] = a[1];
	for (i = 1; i < n; ++i) {
		++k;
		if (a[i - 1] != a[i]) {
			b[k] = 0;
			++k;
		}
		b[k] = a[i];
	}

	for (i = 0; i <= k; ++i) a[i] = b[i];

	for (i = 0; i <= k; ++i) cout << a[i] << endl;
	cout << endl;
	return 0;
}

/*Array125. Дано целое число L (> 1) и целочисленный массив размера N. Заме-нить каждую серию массива, длина которой меньше L, на один элемент с нулевым значением.*/

int Array125()
{
	int a[10], b[10];
	int n, l;
	cout << "N = ";
	cin >> n;
	cout << "L = ";
	cin >> l;
	int i;
	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int i2 = -1, len = 1, i3, endn = n;
	for (i = i; i < n; ++i) {
		if (a[i - 1] != a[i]) {
			if (len < l) {
				b[++i2] = 0;
				endn -= len - 1;
			}
			else {
				for (i3 = 0; i3 < len; ++i3)b[++i2] = a[i - 1];
			}
			len = 0;
		}
		++len;
	}

	if (len < l) {
		b[++i2] = 0;
		endn -= len - 1;
	}
	else {
		for (i3 = 1; i3 <= len; ++i3)b[++i2] = a[i - 1];
	}

	for (i - 0; i < endn; ++i)a[i] = b[i];

	for (i = 0; i < endn; ++i)cout << a[i] << endl;
	cout << endl;
	return 0;
}

/**/