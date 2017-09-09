#include "Customer.h"
#ifndef CustomerA_H
#define CustomerA_H
#include "defs.h"

class CustArray
{
	public:
    	CustArray();
        ~CustArray();
    	void 	  add(Customer*);
    	int 	  getSize();
    	Customer* get(int);
    	void 	  getCustomers();
        Customer* find(int);

	private:
	Customer *custs[MAX_ARR];
	int size;
};
#endif
