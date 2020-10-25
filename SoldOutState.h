#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H

#include "State.h"
#include "GumballMachine.h"

class SoldOutState :public State{
public:
	SoldOutState(GumballMachine *gumballMachine);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();

private:
	GumballMachine *gumballMachine;
};
#endif