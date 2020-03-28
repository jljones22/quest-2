#pragma once
#include "account.h"
#include "database.h"
class Interaction {
public:
	Account newAccount();
	int logOut();
	void userSelection(std::vector<Account> accounts);
};

