#include "TransControl.h"
#include <iostream>
#include <iomanip>
#include <string>

#include <stdio.h>
using namespace std;

TransControl::TransControl(){
}



void TransControl::update(Transaction* tran)
{

  string w = "billy bob";
  getTime(w);
  arr.add(tran);
  tran->setDate(w);
  
}


void TransControl::retrieve(TransArray* a){
    *a = arr;
}
void TransControl::getTime(string& outTime)
{
  time_t rawTime;
  struct tm* myTime;
  stringstream ss1, ss2, ss3;


  time(&rawTime);
  myTime = localtime(&rawTime);

  ss2 << setfill('0') << setw(2);
  ss3 << setfill('0') << setw(2);	

  ss1 << myTime->tm_year	+ 1900;
  ss2 << myTime->tm_mon + 1;
  ss3 << myTime->tm_mday;

  outTime = "";

  outTime += ss1.str();
  outTime += "/";
  outTime += ss2.str();
  outTime += "/";
  outTime += ss3.str();

}

TransControl::~TransControl(){
  arr.clean();
}

