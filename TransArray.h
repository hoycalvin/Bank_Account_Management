#ifndef TRANSARRAY_H
#define TRANSARRAY_H

#include "defs.h"
#include "Transaction.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>


class TransArray {

  public:
    TransArray();
    ~TransArray();
    void    clean();
    void 	  add(Transaction*);
    int 	  getSize();
    Transaction* get(int);
    void     toString(string&);

  private:
    Transaction *trans[MAX_ARR];
    int size;
};

#endif

