#include "State.h"
#include "GumballMachine.h"

class NoQuarterState :public State{
public:
	NoQuarterState(GumballMachine *gumballMachine);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();

private:
	GumballMachine *gumballMachine;
};