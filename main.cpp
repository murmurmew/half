//метод половинного деления
#include <iostream>
using namespace std;

double f(double x) {
	double f;
	f = cos(2.0 / x) - 2.0 * sin(1.0 / x) + 1.0 / x;
	return f;
}
void main() {
	double a, b, e, x;
	int k;
	setlocale(LC_ALL, "Rus");
	a = 1.8; 
	b = 2;
	e = 0.0001;
	cout << "=a" << a << endl;
	cout << "=b" << b << endl;
	cout << "=e" << e << endl;
	if (f(a) * f(b) < 0) {
		cout << "Условие сходимости выполнено" << endl;
		k = 0;
		while (1) {
			x = (a + b) / 2.0;
			k = k + 1;
			if (fabs(f(x)) < e) break;
			if (f(a) * f(x) < 0) {
				a = a;
				b = x;
			}
			else {
				a = x;
				b = b;
			}
		}
		cout << "Корень х=" << x << endl;
		cout << "Количество итераций k=" << k << endl;
	}
	else {
		cout << "Условие сходимсоти не выполнено" << endl;
	}
}
