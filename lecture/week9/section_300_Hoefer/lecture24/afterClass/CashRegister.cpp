#include "CashRegister.h"

CashRegister::CashRegister()
{
    num_items = 0;
}

// this fcn adds an item to the array of items
// returns true if item added successfully
bool CashRegister::addItem(Item item_to_add)
{
    items[num_items] = item_to_add;
    num_items++;
    return true;
}

// calculates and returns the total cost of all items
double CashRegister::calculateTotal()
{
    double running_total = 0;
    for (int i = 0; i < num_items; i++)
    {
        running_total += items[i].getPrice();
    }
    return running_total;
}