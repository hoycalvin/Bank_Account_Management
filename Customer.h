#include <string>
#ifndef Customer_H
#define Customer_H
#include "defs.h"
using namespace std;


class Customer
{
	public:
	Customer(int = 0, string = "");
    	int        getId();
    	string     getName();

	private:
	static int nextId;
	int id;
	string name;

};
#endif
