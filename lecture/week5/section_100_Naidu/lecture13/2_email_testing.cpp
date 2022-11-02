#include <iostream>
#include <string>
#include <cassert> // for testing through assertions

using namespace std;

// program to verify if user input is a valid email address

/**
 * @brief function to check if email is valid
 * 
 * @param email(string)
 * @return true if email is valid
 * @return false if email is invalid
 */
bool checkValidEmail(string email)
{
    int email_len = email.length(); // store the length
    for(int i = 0; i < email_len; i++)
    {
        // terminate the loop if we find @ through the break statement
        if(email[i] == '@')
        {
            return true;
        }
    }
    // return a value for all cases
    return 0;
}

/**
 * @brief printing if valid email
 * 
 * @param answer 
 */
void printValid(bool answer)
{
    if(answer) // answer is a bool variable
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }
}
int main()
{
    string s = "csci1300@colorado.com"; 
    // more robust testing through assertions
    // assert() -> macro/ assertion to test different inputs to our functions
    // checks if LHS == RHS
    // syntax: assert(functionCall(input) == expected_value);

    // test 1 - valid email
    assert(checkValidEmail(s) == true);

    // test 2 - invaid email
    assert(checkValidEmail("csci") == true); // change to false for no errors


    return 0;
}






