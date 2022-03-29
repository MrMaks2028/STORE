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

	cout << "Функция printProd:\n";
	printProd(bread);

	cout << "Функция fullPrice\nПолная стоимость всех продуктов: " << fullPrice(bread) << "\n\n";

	cout << "Функция sell\nВвведите число, на которое хотите снизить кол-во продутов -> ";
	cin >> n;
	cout << "Кол-во продуктов снизилось на " << n << endl;
	sell(bread, n);
	cout << "Теперь кол-во продуктов - " << bread.number;


	return 0;
}