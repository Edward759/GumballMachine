#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "State.h"
#include "GumballMachine.h"

class SoldState :public State{
public:
	SoldState(GumballMachine *gumballMachine);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();

private:
	GumballMachine *gumballMachine;
};
#endif