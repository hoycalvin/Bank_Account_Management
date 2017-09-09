#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

#include "CustArray.h"


CustArray::CustArray()
{
  size = 0;
}

int CustArray::getSize() { return size; }


Customer* CustArray::get(int index)
{
  if (index < 0 || index >= size)
    exit(1);
  return custs[index];
}


void CustArray::add(Customer* customer)
{
  if (size >= MAX_ARR)
    return;

  custs[size++] = customer;
}


Customer* CustArray::find(int a){
    
    for(int i = 0; i<size; i++){
        if(custs[i]->getId() == a){
                return custs[i];
         }
      }
      return NULL;
}

CustArray::~CustArray(){
  for(int i = 0; i < size; i++){
    delete custs[i];
  }
}



