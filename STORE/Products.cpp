#include "Products.h"
#include <iostream>
#include <string>

void printProd(product &P) {
	std::cout << "�������� ��������: " << P.name <<
	std::endl << "����������: " << P.number <<
	std::endl << "���� �� ���� �����: " << P.price << "\n\n";
}
int fullPrice(product& P) {
	int allPrice = P.price * P.number;
	return allPrice;
}

void sell(product &P, int n) {
	P.number -= n;
}