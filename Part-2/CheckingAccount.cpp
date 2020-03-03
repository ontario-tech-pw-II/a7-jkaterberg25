#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	transactionFee = fee;
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	setBalance(getBalance()+amount);
	chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	if(getBalance()-amount-transactionFee > 0){
		setBalance(getBalance()-amount);
		chargeFee();
		return 1;
	}else{
		return 0;
	}

}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	setBalance(getBalance() - transactionFee);
}

void CheckingAccount::display(ostream & os) const
{
	os.precision(2);
	os.precision(2);
	os << fixed;
	os << fixed;
	os << "Account Type: Checking" << endl
		<< "Balance: $" << getBalance() << endl
		<< "Transaction Fee: $" << transactionFee << endl;
}
