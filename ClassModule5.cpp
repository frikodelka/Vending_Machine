// Модуль 5, Юркина Мария

#include "ClassModule5.h"
#include <iostream>

using namespace std;

Snack::Snack(const char* name, short calories, short price)
{
	SnackName = name;
	SnackCalories = calories;
	SnackPrice = price;
}
SnackSlot::SnackSlot(short snacks)
{

	snacksCount = snacks;
}
void SnackSlot::addSnack(Snack* snack)
{
	++snacksCount;
}
VendingMachine::VendingMachine(int slots)
{
	slotCount = slots;
	freeSlots = slots;
}
void VendingMachine::addSlot(SnackSlot* slot)
{
	--freeSlots;
}
int VendingMachine::getEmptySlotsCount()
{
	return freeSlots;
}