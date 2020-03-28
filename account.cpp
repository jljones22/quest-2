#include <iostream>
#include "account.h"
#include "database.h"


void Account::pay_in(float amount) {
	std::cout << "Enter an amount to desposited: " << std::endl;
	std::cin >> amount;
	if (amount > 0) {
		accountBalance += amount;
	}
	else {
		std::cerr << "Amount cannot be negative." << std::endl;
	}
}

bool Account::pay_out(float amount) {
	if ((accountBalance - amount) >= 0) {
		accountBalance -= amount;
		return true;
	}
	else {
		std::cerr << "Error: Inefficient balance funds" << std::endl;
		return false;
	}
}

void Account::setID(long int ID) {
	accountID = ID;
}

void Account::setPIN(long int PIN) {
	accountPIN = PIN;
}

void Account::setBalance(float Balance) {
	if (Balance < 0) {
		accountBalance -= Balance;
	}
	else {
		accountBalance = 0;
	}
	accountBalance = Balance;
}

long int Account::getID(void) {
	return accountID;
}

long int Account::getPIN(void) {
	return accountPIN;
}

float Account::getBalance(void) {
	return accountBalance;
}

Account transferBalance(Account accountA, float transferBalance) {
	if (accountA.getBalance() > transferBalance) {
		accountA.setBalance(transferBalance);
	}
	else {
		std::cerr << "Error: Tranfer Failed! Insufficient Balance." << std::endl;
	}
	return accountA;
}