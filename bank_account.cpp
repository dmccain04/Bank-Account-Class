// FILE: bank_account.cpp
// CLASS IMPLEMENTED: bank_account (see bank_account.h for documentation)

#include "bank_account.h"
#include <iostream>
#include <cassert>
#include <string.h>

namespace main_mccain_2P {
	
	bank_account::bank_account(double amount, std::string name) {
		assert(amount >= 0.0);
		assert(name.length() > 3);
		balance = amount;
		owner = name;
	}
	
	void bank_account::deposit(double amount) {
		assert(amount > 0.0);
		balance += amount;
	}
	
	void bank_account::withdraw(double amount) {
		assert(amount > 0.0);
		balance -= amount;
	}
	
	void bank_account::changeOwner(std::string name) {
		assert(name.length() >= 3);
		owner = name;
	}
}