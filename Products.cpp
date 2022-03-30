#include "Products.h"
#include <iostream>
void printProd(product &p) {
	std::cout << "Name: " << p.name << ", price = " << p.price<< " rub., quantity = " << p.number << std::endl;
}

int fullPrice(product& p) {
	int sum = p.number * p.price;
	return sum;
}

void sell(product& p, int n) {
	p.number -= n;
}
