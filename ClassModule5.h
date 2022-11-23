// Модуль 5, Юркина Мария

#pragma once

#include <iostream>

using namespace std;

class Snack
{
public:
    Snack(const char* name, short calories, short price);
private:
    const char* SnackName;
    short SnackCalories;
    short SnackPrice;
};

class SnackSlot
{
public:
    SnackSlot(short snacks);
    void addSnack(Snack* snack);
private:
    short snacksCount;
};

class  VendingMachine
{
public:
    VendingMachine(int slots);
    void addSlot(SnackSlot* slot);
    int getEmptySlotsCount();
private:
    int slotCount;
    int freeSlots;
};
