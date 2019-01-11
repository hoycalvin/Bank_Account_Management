-Program:bsys (simple bank system)

-Date: Nov 10, 2016

-Purpose: 
• To practice the implementation of a simple design pattern

-List of files:
	-README.txt
	-2404A4UML.pdf

	-Account.cc
	-Account.h
	-AcctList.cc
	-AcctList.h
	-Bank.cc
	-Bank.h
	-BankControl.cc
	-BankControl.h
	-CustArray.cc
	-CustArray.h
	-Customer.cc
	-Customer.h
	-defs.h
	-main.cc

	-TransAction.cc
	-TransAction.h
	-TransArray.cc
	-TransArray.h
	-TransControl.cc
	-TransControl.h

	-View.cc
	-View.h	

	-Makefile
	-bsys 'executable file'

-To compile on BASH:
	1) >cd home/2404A4

	2) >make clean && make


-To run on BASH:
	1) >cd home/2404A4

	2) >./bsys


-Operation: Add Account
	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "1" (for "Admin Menu") then "enter" to be brought to 6 more choices.

	4) Type the option you wish to access, in this case "1" (for "Add Account"), then press the "enter" key.

	5) You will be asked to enter a "Customer id"
		[NOTE: IF YOU FAIL TO ENTER A VALID OPTION, THE PROGRAM WILL NOT ADD THE ACCOUNT,
			AND YOU WILL BE BROUGHT BACK TO THE MAIN MENU]

	6) Enter a 4 digit number (which is an integer) into the prompt, then press the "enter" key.

	7) You will then asked to choose between 1 or 2 depending on the type of account you want to add. Press "enter" key.
		[NOTE: IF YOU CHOOSE AN OPTION OTHER THAN 1 OR 2, YOUR ACCOUNT WILL NOT ADD, AND YOU'LL
			BE BROUGHT BACK TO THE MAIN MENU]

	8) Press "enter" key one last time to be brought back to main menu.


-Operation: Print Acccounts
	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "1" (for "Admin Menu") then "enter" to be brought to 6 more choices.

	4) Type the option you wish to access, in this case "2" (for "Print Accounts"), then press the "enter" key.

	5) You should now see all of the accounts currently in record.

	6) Press "enter" key to continue and head back to main menu.


-Operation: Print Customers
	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	4) Type "1" (for "Admin Menu") then "enter" to be brought to 6 more choices.

	5) Type the option you wish to access, in this case "3" (for "Print Customers"), then press the "enter" key.

	6) You should now see all of the customers, and their id's currently in record.

	7) Press "enter" key to continue and head back to main menu.


-Operation: Remove Account
	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "1" (for "Admin Menu") then "enter" to be brought to 6 more choices.

	4) Type the option you wish to access, in this case "5" (for "Remove Account"), then press the "enter" key.

	5) You will be asked to enter a "Customer id"
		[NOTE: IF YOU FAIL TO ENTER A VALID OPTION, THE PROGRAM WILL NOT REMOVE THE ACCOUNT,
			AND YOU WILL BE BROUGHT BACK TO THE MAIN MENU]

	6) Enter a 4 digit number (which is an integer) into the prompt, then press the "enter" key.

	7) The entered account will now be deleted.

	8) Press "enter" key one last time to be brought back to main menu.


-Operation: Check Balance 
	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "2" (for "Customer Menu") then "enter" to be brought to 4 more choices.

	4) Type the option you wish to access, in this case "1" (for "Check Balance"), then press the "enter" key.

	5) You will now be prompted to enter to enter in the account number you wish to check.
		[NOTE: ACCOUNT ID NUMBER AND CUSTOMER ID NUMBER ARE COMPLETELY DIFFERENT THINGS]
	
	6) Enter your account number and press "enter" .
		[NOTE: IF YOU FAIL TO ENTER AN EXISTING ACCOUNT NUMBER, 
			YOU WILL BE BROUGHT BACK TO THE CUSTOMER MENU.]

	7) Your balance will now be printed, and you'll automatically be brought back to the customer menu.

TO EXIT PROGRAM, MAKE SURE YOU ARE AT THE MAIN MENU, THEN PRESS "0" (ZERO) THEN "ENTER". 


-Operation: Deposit

	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "2" (for "Customer Menu") then "enter" to be brought to 6 more choices.

	4) Type the option you wish to access, in this case "2" (for "Deposit"), then press the "enter" key.

	5) You will now be prompted to enter to enter in the account number you wish to deposit to.

	6) Enter the amount you wish to deposit.

	7) Press Enter to return to Customer Menu.

-Operation: Withdrawal

	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "2" (for "Customer Menu") then "enter" to be brought to 6 more choices.

	4) Type the option you wish to access, in this case "3" (for "Withdrawal"), then press the "enter" key.

	5) You will now be prompted to enter to enter in the account number you wish to withdrawal from.

	6) Enter the amount you wish to withdrawal.
		NOTE: YOU MAY NOT WITHDRAWAL A NEGATIVE AMOUNT OR MORE FUNDS THAN THE ACCOUNT HOLDS.

	7) Press Enter to return to Customer Menu.

-Operation: Print Transactions

	1) Run ">./bsys" from the terminal.

	2) You will be asked to choose between 3 choices on the main menu.

	3) Type "1" (for "Admin Menu") then "enter" to be brought to 6 more choices.

	4) Type the option you wish to access, in this case "3" (for "Print Transactions"), then press the "enter" key.

	5) All previous and recorded transactions will now be printed.

	6) Press "enter" key one last time to be brought back to main menu.

