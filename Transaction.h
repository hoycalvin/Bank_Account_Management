#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "Account.h"
#include "defs.h"
#include <iostream>
#include <string>
#include <sstream>

class Transaction
{
  public:
    Transaction(int, State, float, TransType);
    TransType  getTransType();
    int        getId();
    string     getDate();
    State      getState();
    float      getAmount();
    void       setDate(string);
    int        getAcctNum();
    
  private:
    int        acct;
    TransType  type;
    static int nextTransNum;
    int        id;
    State      state;
    string     date;
    float        amount;
};

#endif
