#pragma once
#include <iostream>
#include <string>



struct product {
	std::string name;
	int price = 1;
	int number = 0;
	
};

void printProd(product &p);
int fullPrice(product& p);
void sell(product& p, int n);
