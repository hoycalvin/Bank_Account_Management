/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Banking System                */
/*  Author:   Christine Laurendeau                 */
/*  Date:     08-JUN-2016                          */
/*                                                 */
/*  (c) 2016 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */

#include "AcctList.h"
#include "Account.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

AcctList::AcctList()
{
 // size = 0;
  head = NULL;
  tail = NULL;
}

//int AcctList::getSize() { return size; }


Account* AcctList::get(int index)
{
  Node *currNode;
  currNode = head;
  while(currNode != NULL){
    if(currNode->data->getAcctNum() == index){
      return currNode->data;
    }
    currNode = currNode->next;
  }


}

void AcctList::removeAcct(int num)
{
  Node* currNode = head;
  Node* prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->getAcctNum() == num)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == NULL)
    return;

  if (prevNode == NULL) {
    head = currNode->next;
  }

  else if(currNode->next == NULL){
    prevNode->next = NULL;
    tail = prevNode;
  }
  else {
    prevNode->next = currNode->next;
  }

  delete currNode->data;
  delete currNode;
}

void AcctList::add(Account* acct)
{
  Node* currNode;
  Node* prevNode;
  Node* newNode;

  newNode = new Node;
  newNode->data = acct;
  newNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (acct->getCustomer()->getId() < currNode->data->getCustomer()->getId())
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = newNode;
  }
  else{
    prevNode->next = newNode;
  }
  newNode->next = currNode;  

  if(currNode == NULL){
    tail = newNode;
  }

}



void AcctList::toString(string& outStr)
{
  stringstream ss;
  Account* account;
  stringstream temp;
  Node* currNode = head;

  outStr = "ACCOUNTS: \n";
  while(currNode != 0)
  {
    account = currNode->data;

    if (account->getAcctType() == CHEQUING)
      outStr += "Chequing:  ";
    else if (account->getAcctType() == SAVINGS)
      outStr += "Savings:   ";
    else
      outStr += "General:   ";

    temp << account->getAcctNum() << "  ";
    
    outStr += temp.str();

    temp.str("");

    temp << setw(4) << account->getCustomer()->getName() << "  ";

    outStr += temp.str();

    temp.str("");

    temp << setw(8) << fixed << setprecision(2) << "$" << account->getBalance();

    outStr += temp.str() + "\n";

    temp.str("");

  	currNode = currNode->next;
  	
  	temp.str("");
	}
}



Account* AcctList::find(int a){
    
    Node *currNode;
    currNode = head;
    while(currNode != NULL){
        if(currNode->data->getAcctNum() == a){
          return currNode->data;
         }
         
         else{
           currNode = currNode->next;
         }
      }
      return NULL;
}

AcctList::~AcctList()
{
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

