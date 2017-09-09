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

#include <iostream>
#include "Bank.h"

AcctList* Bank::getAccounts() { return &accounts; }
CustArray* Bank::getCustomers(){return &customers;}
void Bank::addAcct(Account* acct)
{
        accounts.add(acct);
}
void Bank::addCustomers(Customer *newCustomer){

    customers.add(newCustomer); 
}
void Bank::removeAcct(int acct)
{
        accounts.removeAcct(acct);
}

