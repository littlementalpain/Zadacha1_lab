// ������: ������� 3 �����. ���� ��� ������� ��������������� ������������, ��������� ������� � ����� ������. �������� �������, ������� � ����� ������ � ������� �����������

#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ������ ��������������� ������������, ����� ������ ��� ������� � ����� ������: " << endl;
	cout << "������� ����� ������ �������: " << endl;
	int st1;
	cin >> st1;
	cout << "������� ����� ������ �������: " << endl;
	int st2;
	cin >> st2;
	cout << "������� ����� ������� �������: " << endl;
	int st3;
	cin >> st3;
			
	if (st1 != st2 || st1 != st3 || st2 != st3) {
		cout << "������! ����������� �� �����c��������" << endl;
	}
	if (st1 == st2 && st1 == st3 && st2 == st3) {
		double hhh;
		hhh = ((st1 * 1.0 * sqrt(3)) / 2);
		double pl;
		pl = ((st1 * hhh) / 2);

		if (pl < st1 && pl < hhh) {
			cout << pl << " " << hhh << " " << st1 << endl;
		}
		if (st1 < pl) {
			cout << hhh << " " << st1 << " " << pl << endl;
		}
		if (hhh < pl && st1 > pl) {
			cout << hhh << " " << pl << " " << st1 << endl;
		}

	}
	
	return 0;
}