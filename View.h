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

#ifndef VIEW_H
#define VIEW_H

#include <string>
using namespace std;
#include "Bank.h"

class View
{
  public:
    void mainMenu(int&);
    void adminMenu(int&);
    void custMenu(int&);
    void readCustId(int&);
    void readAcctType(AcctType&);
    void printAccounts(Bank&);
    void printBalance(float);
    void printTransactions(string);
    void printError(string);
    void pause();
    void pauseN();
    int  readAcctNum(); 
    float  readAmountNum(); 
    void printCustomers(Bank&);
   

  private:
    int  readInt();
    
};

#endif
