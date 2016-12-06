// ksuweb.kennesaw.edu/~jhe4/2016Fall/cs3304/Homework/HW1.pdf
// Problem #2
// FILE: bank_account.h
// CLASS PROVIDED: bank_account (part of namespace main_mccain_2P)
//
// CONSTRUCTORS for the bank_account class
//	bank_account(double amount, std::string name)
//		PostCondition: A bank account is created with amount balance and name as the owner
//		If deposit is not provided, then the balance is 0.0. If owner is not provided, name 
//		is John Doe. 
//
// MODIFICATION MEMBER FUNCTIONS for the bank_account class
//	deposit(double amount)
//		Precondition: amount > 0.0
//		Postcondition: The bank account balance increases by amount.
//
//	withdraw(double amount)
//		Precondition: amount > 0.0
//		Postcondition: The bank account balance decreases by amount. 
// 
//	changeOwner(std::string name)
//		Precondition: name length has to be greater than or equal to 3.
// 		Postcondition: The bank account's owner is set to name;
// 
// CONSTANT MEMBER FUNCTIONS for the bank_account class
//	double currentBalance() const
//		Postcondition: This functions returns the value of the balance of the balance account. 
//
//	std::string currentOwner() const
//		PostCondition: This functions returns the value of the owner of the bank account. 
//
// VALUE SEMANTICS for the bank_account class
//	Assignments and copy constructors may be used with bank account objects.

#ifndef MAIN_MCCAIN_BANK_ACCOUNT_H
#define MAIN_MCCAIN_BANK_ACCOUNT_H

#include <string.h>
#include <iostream>

namespace main_mccain_2P {
	class bank_account
	{
	public:
		// CONSTRUCTORS
		bank_account(double amount = 0.0, std::string name = "John Doe");
		// MODIFICATION MEMBER FUNCTIONS
		void deposit(double amount);
		void withdraw(double amount);
		void changeOwner(std::string name);
		// CONSTANT MEMBER FUNCTIONS
		double currentBalance() const { return balance;}
		std::string currentOwner() const { return owner;}
	
	private:
		double balance;
		std::string owner;
	};
}

#endif