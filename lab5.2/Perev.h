#pragma once
#include "Empty.h"
#include "Error.h"
#include "Error1.h"
#include <string>
#include <sstream>
#include <iostream>	
#include <cmath>

using namespace std;

class Perev
{
private:
	int x, y;
public:
	Perev();
	Perev(int x, int y);
	Perev(const Perev& v);

	void setX(int x);
	void setY(int y);

	int getX() const { return x; }
	int getY() const { return y; }

	double Radius();
	double Angle();

	void Display(int i);

	/*friend Perev operator + (const Perev&, const Perev&);
	friend Perev operator - (const Perev&, const Perev&);
	friend Perev operator * (const Perev&, const Perev&);
	friend Perev operator * (const Perev& x, int i);*/

	operator string () const;
	friend istream& operator >> (istream& in, Perev& x);
	friend ostream& operator << (ostream& out, const Perev& x);


};

