#include <iostream>

using namespace std;

// printer
// 1. < 3    - $1
// 2. 4 - 7  - $1.2 -> if(num >=4 && num <=7) , if()
// 3. 8 - 10 - $1.4

int main()
{
    int num_of_copies;
    cout << "Price List" << endl;
    cout << "1 - 3 copies ----- $1" << endl;
    cout << "4 - 7 copies ----- $1.2" << endl;
    cout << "7 - 10 copies ---- $1.4" << endl;
    cout << "How many copies do you want to print: ";
    cin >> num_of_copies;

    switch(num_of_copies)
    {
        case 1:
        case 2:
        case 3: cout << "Pay $1" << endl; break;
        case 4: 
        case 5: 
        case 6: 
        case 7: cout << "Pay $1.2" << endl; break;
        case 8:
        case 9: 
        case 10: cout << "Pay $1.4" << endl; break;
        default: cout << "see the menu once more" << endl; break;
    }

}