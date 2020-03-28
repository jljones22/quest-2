#include <iostream>
#include "database.h"

void Database::append(Account const& a) { 
	Database::setAccount(a);
}

Account Database::find(int accountNumber) {
	std::cout << "Input your Account Number." << std::endl;
	for (int i{ 0 }; i < accounts.size(); i++) {
		if (accounts.at(i).getID() == accountNumber) {
			std::cout << "Account Found" << std::endl;
			return accounts.at(i);
		}
	}
	return Account();
}

void Database::setAccount(Account account) {
	accounts.push_back(account);
}

std::vector<Account> Database::getAccount(void) {
	return std::vector<Account>();
}
