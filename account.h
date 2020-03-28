#pragma once
class Account {
public:
	Account() {};
	void pay_in(float); bool pay_out(float);
	void setID(long int ID), setPIN(long int PIN);
	void setBalance(float Balance);
	long int getID(void), getPIN(void);
	float getBalance(void);
private:
	long int accountID, accountPIN;
	float accountBalance;
};

Account transferBalance(Account accountA, float transferBalance);