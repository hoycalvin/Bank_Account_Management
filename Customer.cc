#include "Customer.h"
#include "defs.h"
#include <string>

int Customer::nextId = 1001;

Customer::Customer(int a, string n) 
{ 
  id  = nextId++;
  name = n;
}

int      Customer::getId()  { return id;}
string   Customer::getName()     { return name;}



