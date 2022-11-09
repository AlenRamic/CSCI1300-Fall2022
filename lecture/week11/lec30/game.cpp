#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int specialNumber = 20;

    int guess = -1;

    int numGuesses = 0;

    while (guess != specialNumber)
    {
        cout << "Enter a guess: ";
        cin >> guess;
        numGuesses++;
    }

    cout << "Congrats! It took you " << numGuesses << " guesses." << endl;

    return 0;
}