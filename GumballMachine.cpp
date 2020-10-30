#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"

GumballMachine::GumballMachine()
{
	hasQuarterState = new HasQuarterState(this);
	noQuarterState = new NoQuarterState(this);
	soldOutState = new SoldOutState(this);
	soldState = new SoldState(this);

	state = noQuarterState;
}

void GumballMachine::printInfo()
{
	cout << "Inventory: " << count << " gumball";
	if (count > 1)
		cout << "s";
	cout << endl;
}

void GumballMachine::insertQuarter()
{
	state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
	state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
	state->turnCrank();
	state->dispense();
}

void GumballMachine::setState(State *s)
{
	state = s;
}

void GumballMachine::setCount(int c)
{
	count = c;
}

int GumballMachine::getCount()
{
	return count;
}

State* GumballMachine::getHasQuarterState()
{
	return hasQuarterState;
}

State* GumballMachine::getNoQuarterState()
{
	return noQuarterState;
}

State* GumballMachine::getSoldOutState()
{
	return soldOutState;
}

State* GumballMachine::getSoldState()
{
	return soldState;
}