#include "Item.h"

class CashRegister
{

private:
    int num_items;
    Item items[100];

    // double total_cost;
    // double running_cost;
public:
    CashRegister();

    // this fcn adds an item to the array of items
    // returns true if item added successfully
    bool addItem(Item item_to_add);

    // calculates and returns the total cost of all items
    double calculateTotal();



};