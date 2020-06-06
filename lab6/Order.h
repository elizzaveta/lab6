#pragma once
#include "Maket.h"
class Order {
	Maket cl_maket;
	int page;
	int price;
public:
	int get_price() { return price; }
	void set(Maket m, int p, int pr) {
		cl_maket = m;
		page = p;
		price = pr;
	}
	void show_info() {
		cl_maket.show_info();
		cout << "page: " << page << endl;
		cout << "price: " << price << endl;
	}
};

