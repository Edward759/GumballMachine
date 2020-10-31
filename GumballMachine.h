#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include "State.h"

class GumballMachine{
public:
	GumballMachine();
	~GumballMachine(){};

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();

	void printInfo();
	void setState(State *s);
	void setCount(int c);
	int getCount();
	void ReleaseBall();
	void refill(int cnt);

	State *getHasQuarterState();
	State *getNoQuarterState();
	State *getSoldOutState();
	State *getSoldState();
	State *getWinnerState();

private:
	State *hasQuarterState;
	State *noQuarterState;
	State *soldOutState;
	State *soldState;
	State *winnerState;

	State *state;
	int count;
};
#endif