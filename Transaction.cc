#include "Transaction.h"
#include "defs.h"
#include <string>

int Transaction::nextTransNum = 1;

Transaction::Transaction(int a, State b, float d, TransType e) {
  acct = a;
  state = b;
  amount = d;
  type = e;
  id  = nextTransNum++;
}

int         Transaction::getId()  { return id;}
string      Transaction::getDate()     { return date;}
float         Transaction::getAmount()     { return amount;}
State       Transaction::getState()     { return state;}
TransType   Transaction::getTransType()     { return type;}
int   Transaction::getAcctNum()     { return acct;}
void   Transaction::setDate(string a)     { date = a;}


