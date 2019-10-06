#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <conio.h>

using namespace std;

/*Array5.ƒано целое число N(> 2).—формировать и вывести целочисленный массив размера N, содержащий N первых элементов последовательности чисел ‘ибоначчи FK*/

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

/*Array10. ƒан целочисленный массив размера . ¬ывести вначале все содержащиес€ в данном массиве четные числа в пор€дке возрастани€ их индексов, а затем Ч все нечетные числа в пор€дке убывани€ их индексов.*/

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

/*Array15. ƒан массив размера . ¬ывести вначале его элементы с нечетными номерами в пор€дке возрастани€ номеров, а затем Ч элементы с четными номерами в пор€дке убывани€ номеров. . ”словный оператор не использовать.*/

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

/*Array20.ƒан массив размера N и целые числа K и L (1<=K<=L<=N).Ќайти сумму элементов массива с номерами от K до L включительно.*/

int Array10()
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

/*Array26. ƒан целочисленный массив размера N. ѕроверить, чередуютс€ ли в нем четные и нечетные числа. ≈сли чередуютс€, то вывести 0, если нет, то вывести пор€дковый номер первого элемента, нарушающего закономерность.*/

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

/*Array39. ƒан массив размера N. Ќайти количество его промежутков монотонности (то есть участков, на которых его элементы возрастают или убывают).*/

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

/*Array52. ƒан массив A размера N. —формировать новый массив B того же раз-мера, элементы которого определ€ютс€ следующим образом:
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

/*Array57. ƒан целочисленный массив A размера N. ѕереписать в новый цело-численный массив B того же размера вначале все элементы исходного мас-сива с четными номерами, а затем Ч с нечетными:
A2, A4, A6, Е, A1, A3, A5, Е .*/

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

/*Array63. ƒаны два массива A и B размера 5, элементы которых упор€дочены по возрастанию. ќбъединить эти массивы так, чтобы результирующий мас-сив C (размера 10) осталс€ упор€доченным по возрастанию.*/

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

