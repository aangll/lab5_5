#include <iostream>
#include <windows.h>
using namespace std;

double b, q, n, bn, s = 0;
int d = 0;
int level;

double F(double b, double  q, double  n, double& bn, int level, int& d)

{
	if (level > d)
		d = level;
	cout << " level = " << level << endl;

	if (n > 0) {

		d += 1;
		bn *= q;
		double t = b * q;
		return t + F(t, q, n - 1, bn, level+1, d);

	}
	else
		return 0;

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������ ���� ������� : "; cin >> b;
	cout << "��������� ������� :"; cin >> q;
	cout << "����� n-�� ����� :"; cin >> n;

	bn = b;

	cout << "���� " << n << "����� :" << F(b, q, n, bn, 1, d) << endl;
	cout << n << "-�� ���� :" << bn << endl;
	cout << "depth = " << d << endl;

	return 0;
}