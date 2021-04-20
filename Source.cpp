#include "Point.h"

int main()
{
	Point A;
	cin >> A;
	cout << "A " << A;

	cout << "Moving the point x:";
	A.moveX();
	cout << endl;
	cout << "Moving the point y:";
	A.moveY();
	cout << endl;

	try {
		Point B(1, 2);
		cout << "B " << B;
		
		cout << B.GetX() << endl;
		B.SetX(5);
	}

	catch (out_of_range a) {
		cout << "exception: " << a.what() << endl;
	}
	cout << (string)A;
	cout << "try --A" << endl;
	try {
		--A;
	}
	catch (myerror& a) {
		cout << "exception: " << a.what() << endl;
	}
	cout << "try A++" << endl;
	try {
		A++;
	}
	catch (myerror_base* a) {
		cout << "exception: " << a->what() << endl;
	}
}