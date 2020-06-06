#pragma once
#include "Client.h"

using namespace std;
class Podborshyk:public Human {
public:
	vector<int> overal;

	vector<vector<int>> show_possible_place(int **free_pages) {
		vector<vector<int>> places;
		for (int i = 0; i < 18; i++) {
			if (free_pages[i][0] == 1) {
				vector<int> temp;
				temp.push_back(i + 1);
				temp.push_back(free_pages[i][1]);
				places.push_back(temp);
				free_pages[i][0] = 0;
			}

		}
		return places;
	}
	int** set_place(int pl, vector<vector<int>> all, int** free_pages) {
		for (int i = 0; i < all.size(); i++) {
			free_pages[all[i][0] - 1][0] = 1;
		}
		free_pages[pl - 1][0] = 0;
		overal.push_back(pl);
		return free_pages;
	}
};