#include <iostream>
#include <string.h>
#include <cstdlib>
#include "bank_account.h"

using namespace std;
using main_mccain_2P::bank_account;

int main(int argc, char **argv)
{
	bank_account b1(200.00, "Dontre");
	
	cout << "The current balance is $" << b1.currentBalance() << endl;
	cout << "The current owner of the bank account is " << b1.currentOwner() << endl;
	
	b1.deposit(50.25);
	cout << "The current balance is $" << b1.currentBalance() << endl;
	b1.withdraw(15.75);
	cout << "The current balance is $" << b1.currentBalance() << endl;
	
	b1.changeOwner("bo");
	cout << "The current owner of the bank account is " << b1.currentOwner() << endl;
}
