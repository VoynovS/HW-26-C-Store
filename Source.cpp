#include <iostream>
#include "Products.h"

using namespace std;

int main() {
	product p = { "Oranges", 10, 150};
	product p1 = { "Potatos", 15, 105 };
	product p2 = { "Limons", 20, 210};

	printProd(p);
	printProd(p1);
	printProd(p2);

	cout << "The Full cost of oranges = " << fullPrice(p) << " rub.\n";
	cout << "The Full cost of potatos = " << fullPrice(p1) << " rub.\n";
	cout << "The Full cost of limons = " << fullPrice(p2) << " rub.\n";

	sell(p, 3);
	sell(p1, 10);
	sell(p2, 4);
	printProd(p);
	printProd(p1);
	printProd(p2);
	cout << "The Full cost of oranges = " << fullPrice(p) << " rub.\n";
	cout << "The Full cost of Potatos = " << fullPrice(p1) << " rub.\n";
	cout << "The Full cost of Limons = " << fullPrice(p2) << " rub.\n";



	return 0;
}