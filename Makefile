OBJ = main.o BankControl.o Bank.o Account.o View.o AcctList.o CustArray.o Customer.o TransArray.o Transaction.o TransControl.o

bsys:	$(OBJ)
	g++ -o bsys $(OBJ)

main.o:	main.cc 
	g++ -c main.cc

BankControl.o:	BankControl.cc BankControl.h Bank.h View.h
	g++ -c BankControl.cc

View.o:	View.cc View.h 
	g++ -c View.cc

Bank.o:	Bank.cc Bank.h AcctList.h  
	g++ -c Bank.cc

Account.o:	Account.cc Account.h 
	g++ -c Account.cc

AcctArray.o:	AcctList.cc AcctList.h Account.h defs.h
	g++ -c AcctArray.cc
	
	
CustArray.o: CustArray.cc CustArray.h
	g++ -c CustArray.cc  
       
Customer.0: Customer.cc Customer.h
	g++ -c Customer.cc   

TransArray.o: TransArray.cc TransArray.h
	g++ -c TransArray.cc  
       
Transaction.0: Transaction.cc Transaction.h
	g++ -c Transaction.cc   
	
TransControl.o: TransControl.cc TransControl.h
	g++ -c TransControl.cc  
       
clean:
	rm -f $(OBJ) bsys
