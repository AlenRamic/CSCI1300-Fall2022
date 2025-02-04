#ifndef AUX_FUNCTIONS
#define AUX_FUNCTIONS

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include "Pokemon.h"

using namespace std;

// prototype for random numbers
int randomNumbers(int min, int max);

// prototype for split function  - TO BE IMPLEMENTED BY YOU
// int split(string line, char delim, string arr[], int size);

// prototype for readPokemons - TO BE IMPLEMENTED BY YOU
// int readPokemons(string filename, Pokemon myPokemons[], int numPokemons, int totalPokemons);

// reference: https://stackoverflow.com/questions/9158150/colored-output-in-c
//==============================================================================
// Colors
//==============================================================================

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

//==============================================================================
// Auxiliary functions
//==============================================================================

int randomNumbers(int min, int max)
{
    srand(time(NULL));
    return (rand() % (max - min + 1)) + min;
}

#endif
