#include "NoQuarterState.h"

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine)
{
	this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter()
{
	gumballMachine->setState(gumballMachine->getHasQuarterState());
	cout << "You inserted a quarter." << endl;
}

void NoQuarterState::ejectQuarter()
{
	cout << "You should insert a quarter first." << endl;
}

void NoQuarterState::turnCrank()
{
	cout << "You should insert a quarter first." << endl;
}

void NoQuarterState::dispense()
{
	cout << "You should insert a quarter first." << endl;
}