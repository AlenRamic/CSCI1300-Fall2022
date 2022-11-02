#include <fstream>
#include <iostream>
#include "Item.h"
#include "split.h"
#include "CashRegister.h"

using namespace std;

int main()
{
    // declare 50 items (an array of 50 items)
    // this calls the default constructor 50 times
    // Item my_items[50];

    CashRegister register_1;

    /* register_1.addItem(Item());
    register_1.addItem(Item());

    cout << "Your total is " << register_1.calculateTotal() << endl;

    register_1.printReceipt();
    register_1.endTransaction(); */


    // make a file handle (ifstream object)
    ifstream fin = ifstream("items.txt");

    // to keep track of our position
    int index = 0;

    // to hold each line of the file
    string line;

    while (getline(fin, line))
    {
        // we have access to one line of the file in here.
        // we need to parse it in order to fill the fields of an object
        // let's use the split fcn.

        string temp[3]; // each line split into three

        // split line into temp
        int ret_val = split(line, ',', temp, 3);

        // how could we handle empty lines here !?!
        
        // make a temporary item to save into the array
        double temp_int = stod(temp[2]);
        Item tempItem = Item(temp_int, temp[1], temp[0]);

        // save item into array.
        register_1.addItem(tempItem);

        // alternatively you can directly assign the new Item
        // my_items[index] = Item(stod(temp[2]), temp[1], temp[0]);

        // OR, another option is to modify the values of the existing (blank) item
        //my_items[index].setPrice(stod(temp[2]));
        //my_items[index].setUpc(temp[1]);
        //my_items[index].setDescription(temp[0]);

        // don't forget to increment index
        index++;
    }

    cout << "Your total is: " << register_1.calculateTotal() << endl;
    return 0;
}