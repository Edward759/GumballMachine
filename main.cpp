#include "GumballMachine.h"

int main()
{

	GumballMachine *gumballmachine = new GumballMachine();
	gumballmachine->setCount(10);

	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;
/*
	gumballmachine->insertQuarter();
	gumballmachine->ejectQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->ejectQuarter();
	gumballmachine->printInfo();
	cout << endl;

	gumballmachine->insertQuarter();
	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->insertQuarter();
	gumballmachine->turnCrank();
	gumballmachine->printInfo();
	cout << endl;*/

	system("pause");
}