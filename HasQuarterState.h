#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H

#include "State.h"
#include "GumballMachine.h"

class HasQuarterState :public State{
public:
	HasQuarterState(GumballMachine *gumballMachine);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();

private:
	GumballMachine *gumballMachine;
};
#endif