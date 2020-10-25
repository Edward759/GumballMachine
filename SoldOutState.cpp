#include "SoldOutState.h"

SoldOutState::SoldOutState(GumballMachine *gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void SoldOutState::insertQuarter()
{
	cout << "Sorry, the machine sold out." << endl;
}

void SoldOutState::ejectQuarter()
{
	cout << "You should insert a quarter first." << endl;
}

void SoldOutState::turnCrank()
{
	cout << "You should insert a quarter first." << endl;
}

void SoldOutState::dispense()
{
	cout << "You should insert a quarter first." << endl;
}