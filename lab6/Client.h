#pragma once
#include "Person.h"
#include "Order.h"
class Client : public Human {
	string id;
	Order ad;
public:
	Client(string n, string i) : Human(n) {
		id = i;
	}
	void show_info() {
		cout << "name: " << name << endl;
		ad.show_info();
	}

	string get_opinion() {
		int todo = rand() % 2;
		if (todo == 0) return ("Hi, I am " + name);
		else return "";

	}
	int get_option(int n) {
		int todo = rand() % 2;
		if (todo == 0) {
			return (rand() % n);
		}
		else {
			return -1;
		}
	}
	int get_option_anyway(int n) {

		return ((rand() % n) + 1);
	}
	void add_order(Maket m, int page, int price) {
		ad.set(m, page, price);
	}
	string get_id() { return id; }
	int get_income() { return ad.get_price(); }
};


