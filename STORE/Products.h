#pragma once
#include <iostream>
#include <string>

struct product {
	std::string name;
	int number;
	int price;
};

void printProd(product &P);
int fullPrice(product &P);
void sell(product& P, int n);