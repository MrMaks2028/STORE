#include "Products.h"
#include <iostream>
#include <string>

using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	product bread = { "Bread", 5,40 };
	product choco = { "Chocolate", 7, 30 };
	product milk = { "Milk", 2, 60 };
	int n;

	cout << "������� printProd:\n";
	printProd(bread);

	cout << "������� fullPrice\n������ ��������� ���� ���������: " << fullPrice(bread) << "\n\n";

	cout << "������� sell\n�������� �����, �� ������� ������ ������� ���-�� �������� -> ";
	cin >> n;
	cout << "���-�� ��������� ��������� �� " << n << endl;
	sell(bread, n);
	cout << "������ ���-�� ��������� - " << bread.number;


	return 0;
}