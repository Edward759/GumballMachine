#include "HasQuarterState.h"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void HasQuarterState::insertQuarter()
{
	cout << "You can't insert another quarter." << endl;
}

void HasQuarterState::ejectQuarter()
{
	gumballMachine->setState(gumballMachine->getNoQuarterState());
	cout << "You ejected a quarter." << endl;
}

void HasQuarterState::turnCrank()
{
	cout << "You turned..." << endl;

	gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
	int count = gumballMachine->getCount() - 1;
	gumballMachine->setCount(count);

	if (count == 0)
		gumballMachine->setState(gumballMachine->getSoldOutState());
	else
		gumballMachine->setState(gumballMachine->getNoQuarterState());

	cout << "Please wait, the gumball is rolling out." << endl;
}