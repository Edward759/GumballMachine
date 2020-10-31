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
	int winner = rand() % 10;
	if (winner == 0 && gumballMachine->getCount() > 1)
	{
		gumballMachine->setState(gumballMachine->getWinnerState());
	}
	else
	{
		gumballMachine->setState(gumballMachine->getSoldState());
	}

}

void HasQuarterState::dispense()
{
	cout << "No gumball dispense." << endl;
}