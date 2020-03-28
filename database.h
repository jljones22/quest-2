#pragma once
#include <vector>
#include "account.h"
class Database {
public:
	Database() {};
	void append(Account const& a);
	Account find(int accountNumber);
	void setAccount(Account account);
	std::vector<Account> getAccount(void);
private:
	std::vector<Account> accounts;
};