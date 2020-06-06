#pragma once
#include "Podborshyk.h"
#include "agencyPartner.h"
#include <iomanip>
using namespace std;

template <typename T>
class Agency
{
	int count_free;
	int **free_pages;
	Podborshyk bob = Podborshyk();
	agencyPartner<T> myPart = agencyPartner<T>();

	vector<T> info;

	Maket current_client_maket;

	void make_an_order_part1(T* client) {
		myPart.make_some_makets(client);
		current_client_maket = myPart.choose(client);
	}
	void make_an_order_part1(T* client, string text, string backColor, string graph_el) {
		current_client_maket.set_all(text, backColor, graph_el);
	}
	void make_an_order_part2(T* client) {
		vector<vector<int>> all_pl = bob.show_possible_place(free_pages);
		int choice = client->get_option_anyway(all_pl.size());
		free_pages = bob.set_place(all_pl[choice - 1][0], all_pl, free_pages);

		int price = free_pages[all_pl[choice - 1][0] - 1][1];
		count_free--;

		client->add_order(current_client_maket, all_pl[choice - 1][0], price);
	}
public:
	Agency() {
		count_free = 18;
		free_pages = new int* [18];
		for (int i = 0; i < 18; i++) {
			free_pages[i] = new int[2];
			for (int j = 0; j < 2; j++) {
				free_pages[i][0] = 1;
				free_pages[i][1] = rand() % 101 + 1;
			}
		}
	}

	bool make_an_order(T* client) {
		if (count_free != 0) {
			make_an_order_part1(client);
			make_an_order_part2(client);
			info.push_back(*client);
			return true;
		}
		else {
			return false;
		}
	}
	bool make_an_order(T* client, string text, string backColor, string graph_el) {
		if (count_free != 0) {
			make_an_order_part1(client, text, backColor, graph_el);
			make_an_order_part2(client);
			info.push_back(*client);
			return true;
		}
		else {
			return false;
		}
	}


	void determine_income() {
		for (int i = 0; i < info.size(); i++) {
			cout << "Income from client with id: " << info[i].get_id() << " is " << info[i].get_income() << endl;
		}
	}

};

