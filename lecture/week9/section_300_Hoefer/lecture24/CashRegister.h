#include <iostream>
#include "Item.h"


class CashRegister
{
private:
    Item items[100];
    int num_items;

public:
    CashRegister()
    {
        num_items = 0;
    }

    void AddItem(Item itemToAdd)
    {
        items[num_items] = itemToAdd;
        num_items++;
    }

    double CalculateTotal()
    {
        double total = 0;
        for (int i = 0; i < num_items; i++)
        {
            total += items[i].getPrice();
        }
        return total;
    }






};