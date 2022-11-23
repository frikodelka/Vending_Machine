// Module 5, Yurkina Marya

#include "ClassModule5.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	Snack* bounty = new Snack("Bounty", 130, 55);
	Snack* snickers = new Snack("Snickers",450, 60);
	Snack* twix = new Snack("Twix", 500, 45);
	Snack* mars = new Snack("Mars", 455, 50);
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	slot->addSnack(twix);
	slot->addSnack(mars);
	VendingMachine* machine = new VendingMachine(10);
	machine->addSlot(slot);
	cout << machine->getEmptySlotsCount();
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	delete twix;
	delete mars;

	return 0;
}
