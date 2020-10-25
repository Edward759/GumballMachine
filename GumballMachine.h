#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include "State.h"

class GumballMachine{
public:
	GumballMachine(int c);
	~GumballMachine() = default;

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();

	void printInfo();
	void setState(State *s);
	void setCount(int c);
	int getCount();

	State *getHasQuarterState();
	State *getNoQuarterState();
	State *getSoldOutState();
	State *getSoldState();

private:
	State *hasQuarterState;
	State *noQuarterState;
	State *soldOutState;
	State *soldState;

	State *state;
	int count;
};
#endif