#include "SoldState.h"

SoldState::SoldState(GumballMachine *gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter()
{
	cout << "You can't insert another quarter." << endl;
}

void SoldState::ejectQuarter()
{
	cout << "You have turned the crank." << endl;
}

void SoldState::turnCrank()
{
	cout << "Turning the crank twice dosen't give you two gumballs." << endl;
}

void SoldState::dispense()
{
	cout << "Please wait, the gumball is rolling out." << endl;
}