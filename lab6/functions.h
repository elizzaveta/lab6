#pragma once
#include<iostream>
using namespace std;

class func {
protected:
	double x;
public:
	func(double x) {
		this->x = x;
	}
	virtual double calculate() = 0;
};

class tg : public func {
	double p2 = 3.14159265359 / 2;
public:
	tg(double x) : func(x) {}
	double calculate() override;
};

class arctg : public func {
	int one = 1;
public:
	arctg(double x) : func(x) {}
	double calculate() override;
};


