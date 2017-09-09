#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include "TransArray.h"
using namespace std;


TransArray::TransArray()
{
  size = 0;
}



int TransArray::getSize() { return size; }


Transaction* TransArray::get(int index)
{
  if (index < 0 || index >= size)
    exit(1);
  return trans[index];
}



void TransArray::add(Transaction* tran)
{
  if (size >= MAX_ARR)
    return;
  trans[size++] = tran;


}

void TransArray::toString(string& outStr)
{

  Transaction* transaction;
  stringstream temp;

  temp << "TRANSACTIONS: \n";
  
  for(int i = 0; i < size; i++){
  
    transaction = trans[i];
    
    //cout << "21" << endl; 
    if (transaction->getTransType() == DEPOSIT)
     temp << "Deposit:  ";
    else
      temp << "Withdrawl: ";

    temp << transaction->getId() << "  ";
    



    if(transaction->getState() == 1)
      temp << setw(4) << "Success" << "  ";
    else  
      temp << setw(4) << "Failure" << "  ";


    temp << setw(8) << transaction->getDate();
    
    temp << setw(8) << transaction->getAcctNum();

    temp << setw(8) << fixed << setprecision(2) << "$" << transaction->getAmount();

    temp << "\n";
    
	}
	outStr = temp.str();
}

void TransArray::clean(){
  for(int i = 0; i < size; i++){
    delete trans[i];
  }
}


TransArray::~TransArray(){


}




