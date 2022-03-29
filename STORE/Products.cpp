#include "Products.h"
#include <iostream>
#include <string>

void printProd(product &P) {
	std::cout << "Название продукта: " << P.name <<
	std::endl << "Количество: " << P.number <<
	std::endl << "Цена за одну штуку: " << P.price << "\n\n";
}
int fullPrice(product& P) {
	int allPrice = P.price * P.number;
	return allPrice;
}

void sell(product &P, int n) {
	P.number -= n;
}