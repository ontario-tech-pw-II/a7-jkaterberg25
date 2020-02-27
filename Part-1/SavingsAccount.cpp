#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	if(rate >= 0){
		this->rate = rate;
	}else{
		this->rate = 0;
	}
}

double SavingsAccount::calculateInterest() {
	return (getBalance() * rate);
} 

void SavingsAccount::display(ostream & os) const
{
	cout << "Account Type: Saving" << endl
		<< "Balance($): " << getBalance() << endl
		<< "Rate: " << rate << endl;
}
