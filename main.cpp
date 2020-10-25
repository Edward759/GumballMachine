#include "GumballMachine.h"

int main()
{

	GumballMachine *gumballmachine = new GumballMachine(5);

	gumballmachine->printInfo();
	cout << endl;

	/*gumballmachine.insertQuarter();
	gumballmachine.turnCrank();
	gumballmachine.printInfo();*/
	cout << endl;
/*
	gumballmachine.insertQuarter();
	gumballmachine.ejectQuarter();
	gumballmachine.turnCrant();
	gumballmachine.getInfo();
	cout << endl;

	gumballmachine.insertQuarter();
	gumballmachine.turnCrant();
	gumballmachine.insertQuarter();
	gumballmachine.turnCrant();
	gumballmachine.ejectQuarter();
	gumballmachine.getInfo();
	cout << endl;

	gumballmachine.insertQuarter();
	gumballmachine.insertQuarter();
	gumballmachine.turnCrant();
	gumballmachine.insertQuarter();
	gumballmachine.turnCrant();
	gumballmachine.insertQuarter();
	gumballmachine.turnCrant();
	gumballmachine.getInfo();
	cout << endl;*/

	system("pause");
}