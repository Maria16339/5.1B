#pragma once
#include <string>
#include <sstream>
using namespace std;
class myerror
{
	string s;
public:
	myerror() throw() : s("") {};
	myerror(const string& s1) throw() : s(s1) {};
	virtual ~myerror() {};
	string const what() const throw () { return s; };
};
