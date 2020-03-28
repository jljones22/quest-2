#include <iostream>
#include "account.h"
#include "interaction.h"

long int userID, userPIN; float userBalance, amount;

Account Interaction::newAccount() {
	std::cout << "Would you like to [R]egister or [A]thorize an Account?" << std::endl;
	Account temp;
	char userInput{ NULL };
	if (userInput == 'R') {
		std::cout << "Please input an account number" << std::endl;
		std::cin >> userID;
		temp.setID(userID);
		std::cout << "Please input a PIN" << std::endl;
		std::cin >> userPIN;
		temp.setPIN(userPIN);
	}
	else if (userInput == 'A') {
		std::cout << "Please input your PIN" << std::endl;
		if (userPIN == temp.getPIN()) {
			std::cout << "Welcome back!" << std::endl;
		}
		else {
			std::cerr << "Wrong PIN" << std::endl;
		}
	}
	return Account();
}

int Interaction::logOut() {
	return -1;
}

void Interaction::userSelection(std::vector<Account> accounts) {
	Interaction temp;
	int selection{ NULL };
	while (selection != 6) {
		std::cout << "Please make a selection..." << std::endl;
		std::cout << "1.) Enter '1' to Access/Register your Account" << std::endl;
		std::cout << "2.) Enter '2' to make a deposit" << std::endl;
		std::cout << "3.) Enter '3' to withdraw from an Account" << std::endl;
		std::cout << "4.) Enter '4' to display your Account's balance" << std::endl;
		std::cout << "5.) Enter '5' to logout of your Account" << std::endl;
		std::cout << "6.) Enter '6' to terminate the program" << std::endl;
		std::cin >> selection;

		switch (selection) {
		case '1':
			temp.newAccount();
			break;
		case '2':
			std::cout << "Input an amount to desposit" << std::endl;
			std::cin >> amount;
			accounts.back().pay_in(amount);
			break;
		case '3':
			std::cout << "Input an amount to withdraw" << std::endl;
			std::cin >> amount;
			accounts.back().pay_out(amount);
			break;
		case '4':
			std::cout << "Account Balance is: $" << accounts.back().getBalance() << std::endl;
			break;
		case '5':
			std::cout << "Logging out..." << std::endl;
			logOut();
			break;
		case '6':
			std::cout << "Exiting Program" << std::endl;
			exit(0);
			break;
		}
		system("CLS");
	}
}
