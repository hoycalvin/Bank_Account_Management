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

#ifndef ACCTARRAY_H
#define ACCTARRAY_H

#include "defs.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <sstream>

class AcctList
{

  class Node{
    friend class AcctList;
    private:
      Node *next;
      Account *data;

  };

  public:
    AcctList();
    ~AcctList();
    void     toString(string&);
    void     add(Account*);
    Account* get(int);
    void     removeAcct(int);
  //int      getSize();
    Account* find(int);
  private:
    Node *head;
    Node *tail;
  //int size;
};

#endif

