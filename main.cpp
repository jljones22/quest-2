#include <iostream>

#include "account.h"
#include "database.h"
#include "interaction.h"

using namespace std;

int main(void) {
	Database Dtemp;
	Interaction Itemp;

	std::cout << "Welcome to an ATM!" << std::endl;
	Itemp.userSelection(Dtemp.getAccount());

	return 0;
}