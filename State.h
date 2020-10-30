#ifndef STATE_H
#define STATE_H

#include <iostream>
using namespace std;

class State{
public:
	virtual ~State(){};

	virtual void insertQuarter(){};
	virtual void ejectQuarter(){};
	virtual void turnCrank(){};
	virtual void dispense(){};
};

#endif