#pragma once
class Human {
protected:
	string name;
public:
	Human() { name = ""; }
	Human(string n) {
		name = n;
	}

	string get_name() { return name; }
};