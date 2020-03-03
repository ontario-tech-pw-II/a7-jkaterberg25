#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	if(rate >= 0){
		interestRate = rate;
	}else{
		interestRate = 0;
	}
}

double SavingsAccount::calculateInterest() {
	return (getBalance() * interestRate);
} 

void SavingsAccount::display(ostream & os) const
{
	os.precision(2);
	os << fixed;
	os << "Account Type: Saving" << endl
		<< "Balance($): " << getBalance() << endl
		<< "Rate: " << interestRate*100 << "%" <<  endl;
}
