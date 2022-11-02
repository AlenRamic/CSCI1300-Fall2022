#include <iostream>

using namespace std;

int main(){
    // print prompt asking user for their favorite LETTER
    cout << "What is your favorite letter?";

    // declare a destination point for the user input
    char yourFavoriteLetter;

    // get the input from the user
    cin >> yourFavoriteLetter;

    // print out their favorite letter
    cout << "Your favorite letter is:" << yourFavoriteLetter << endl;


    // print out the INTEGER representation of their favorite letter 
    // (remember our friend, the ASCII table?)
    cout << "The integer representation of your favorite letter is..." 
            << static_cast<int>(yourFavoriteLetter) << endl;

    

    return 0;
}