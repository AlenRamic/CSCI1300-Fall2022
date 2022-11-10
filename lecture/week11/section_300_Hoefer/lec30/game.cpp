#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //cout << time(0) << endl;
    srand(time(0));    
    //rand();
    int specialNumber = (rand() % 100) + 1;
    int guess = -1;
    int numGuesses = 0;

    while (guess != specialNumber)
    {
        cout << "Enter a guess: ";
        cin >> guess;
        numGuesses++;
        if (guess < specialNumber)
        {
            cout << "Too low, guess again" << endl;
        } else if (guess > specialNumber)
        {
            cout << "Too high, guess again" << endl;
        }
    }

    cout << "Congrats! It took you " << numGuesses << " guesses." << endl;

    return 0; 
}