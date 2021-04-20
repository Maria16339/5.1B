#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "myerror.h"
#include "myerror_base.h"
#include <exception>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(double a, double b) throw (out_of_range);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void moveX() ;
	void moveY() ;
	void Distance() const { cout << "Distance: " << sqrt(x * x + y * y) << endl; };
	Point& operator --() throw (myerror);
	Point& operator ++() throw (myerror);
	Point operator --(int) throw (myerror_base);
	Point operator ++(int) throw (myerror_base);
	string toString() const;
};