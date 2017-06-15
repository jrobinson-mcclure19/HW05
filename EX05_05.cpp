/////////////////////////////
// Jalen Robisnon-McClure
// CS 172-1
// June 14th, 2017
// EX 05_05
/////////////////////////////

#include<iostream>
#include <vector>
#include <ctime>
using namespace std;

// account class
class Account 
{
	// data fields
	int id;
	double balance;
	static double annualInterestRate;
	double amount;
	double monthlyInterestrate;
	double newBalance;
	string name;

	// implement functions
	int ID()
	{
		id = 1122;
	}

	double Balanace()
	{
		balance = 20000;
	}

	double AnnualInterestRate()
	{
		annualInterestRate = 0.045;
	}


	void getMonthlyInterestRate(double newMonthlyInterestRate)
	{
		monthlyInterestrate = newMonthlyInterestRate;
		return monthlyInterestrate;
		
	}

	void whitdraw(double amount)
	{
		newBalance = balance - amount;
		return newBalance;

	}

	void deposit()
	{
		newBalance = balance + ammount;
		return newBalance;
	}



};
// transactions class
class Transaction
{
public:
	Transaction();
	double withdraw();
	double deposit();
private:
	double transactions;
};
// vector
Transaction::Transaction()
{
	vector<transaction>;
}
// implements fuctions that withdraws and deposits
double Transaction::withdraw()
{
	transactions++;
}
double Transaction::deposit()
{
	transactions--;
}

int main()
{

	return 0;
}