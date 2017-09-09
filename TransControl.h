#ifndef TRANSCONTROL_H
#define TRANSCONTROL_H
#include "Transaction.h"
#include "TransArray.h"
#include "defs.h"


class TransControl
{
  public:
    TransControl();
    ~TransControl();
    void init();
    void update(Transaction*);
    void retrieve(TransArray*);
    void getTime(string&);
    
  private:
    TransArray arr;
    
    
};
#endif
