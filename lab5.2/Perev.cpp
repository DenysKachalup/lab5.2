#include "Perev.h"

Perev::Perev()
	:x(1), y(1){}
Perev::Perev(int x, int y)
{
	setX(x), setY(y);
}
Perev::Perev(const Perev& v)
{
	x = v.x;
	y = v.y;
}

void Perev::setX(int x) 
{
	this->x = x;
}
//void Perev::setY(int y) 
//{
//	this->y = y;
//}
//void Perev::setY(int y) throw(bad_exception)
//{
//	if (y == 0)
//		throw bad_exception();
//	this->y = y;
//}

//void Perev::setY(int y) throw()
//{
//	if (y == 0)
//		throw bad_exception();
//	this->y = y;
//}

//void Perev::setY(int y) throw(Empty)
//{
//	if (y == 0)
//		throw Empty();
//	this->y = y;
//}

//void Perev::setY(int y) throw(Error)
//{
//	if (y == 0)
//		throw Error("Error");
//	this->y = y;
//}

//void Perev::setY(int y) throw(Error1)
//{
//	if (y == 0)
//		throw Error1("Error1");
//	this->y = y;
//}

void Perev::setY(int y) throw(Error)
{
	if (y == 0)
		throw Error("Error");
	this->y = y;
}

double Perev::Radius()
{
	return sqrt((x * x) + (y * y));
}
double Perev::Angle()
{
	double a = asin(x / (y*1.0));
	return a;
}
//void Perev::Display(Perev& x,Perev& y, int i)
//{
//	Perev z = x + y * i;
//	cout << "z = x + iy " << z << endl;
//	cout << "z = radius * (cos(angle) + isin(angle)) ";
//
//}
void Perev::Display(int i)
{
	int z = x + y * i;
	cout << "z = x + iy = " << z << endl;
	double za = Radius() * (cos(Angle()) + i * sin(Angle()));
	cout << "z = radius * (cos(angle) + isin(angle)) = " << za << endl;

}
//Perev operator + (const Perev& x, const Perev& y)
//{
//	return Perev(x.x + y.x, x.y + y.y);
//}
//Perev operator - (const Perev& x, const Perev& y)
//{
//	return Perev(x.x - y.x, x.y - y.y);
//}
//Perev operator * (const Perev& x, const Perev& y)
//{
//	return Perev(x.x * y.x - x.y * y.y, x.x * y.x + x.y * y.y);
//}
//Perev operator * (const Perev& x, int i)
//{
//	return Perev(x.x * i, x.y * i);
//}
Perev::operator string () const
{
	stringstream sout;
	sout << " x = " << x << endl;
	sout << " y = " << y << endl;

	return sout.str();
}
ostream& operator << (ostream& out, const Perev& x)
{
	out << string(x);
	return out;
}
istream& operator >> (istream& in, Perev& x)
{
	int f, s;
	cout << "x = "; in >> f;
	cout << "y = "; in >> s;
	
	x.setX(f), x.setY(s);
	return in;
}