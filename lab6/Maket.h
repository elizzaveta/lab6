#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;
class Maket {
	string text;
	string backColor;
	string graphical_el;
public:
	string get_text() { return text; }
	string get_backColor() { return backColor; }
	string get_graphical_el() { return graphical_el; }

	void set_all(string t, string col, string el) {
		text = t;
		backColor = col;
		graphical_el = el;
	}
	void set_text(string t) { text = t; }
	void set_backColor(string color) { backColor = color; }
	void set_gr_el(string el) { graphical_el = el; }

	void show_info() {
		cout << "text: " << text << endl;
		cout << "backColor: " << backColor << endl;
		cout << "Graphical elems: " << graphical_el << endl;
	}
};

