//well done
#pragma once
#include "Person.h"
template <typename T>
class agencyPartner {
	Maket makets[5];
	string colors[9] = { "red","blue","yellow","white","grey","green","pink","orange","brown" };
	string gr_el[9] = { "stars","circles","hearts","rhoumbus","triangles","cats","dots","clouds","confetti" };

public:
	void make_some_makets(T* client) {
		string text_t = client->get_opinion();
		int col_ch = client->get_option(9);
		int gr_ch = client->get_option(9);
		int col = col_ch, gr = gr_ch;
		string text = text_t;
		for (int i = 0; i < 5; i++) {
			if (col_ch == -1) col = rand() % 9;
			if (gr_ch == -1) gr = rand() % 9;
			if (text_t == "") text = "Random ad text";
			makets[i].set_all(text, colors[col], gr_el[gr]);

		}
	}
	Maket& choose(T* client) {
		int ch = client->get_option_anyway(5);
		return makets[ch-1];
	}
};

