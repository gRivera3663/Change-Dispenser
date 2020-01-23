/*
 This program determines the amount of change that is given back to the user
 in the form of dollars and coins.
 
 Currently only outputting change at a fixed rate, not based on user's desire.
 
 For example:
 $50 -> 1 $50 Bill
 NOT:
 $50 -> 2 $20 Bills, 1 $5 Bill, and 5 $1 Bills
*/

#include<iostream>
#include"coin_counter.h"

using namespace std;

int main(void)
{
    counter user;
    float moneyRequested = 0;   // Change wanted by user
    
    /* Asking the user what change they want */
    while(true)
    {
        cout << "Amount needed: ";
        cin >> moneyRequested;
        
        if (moneyRequested <= 0)
            cout << "Improper input, please try again." << endl;
        else
            break;
    }
    
    /* Checking what specific bills are needed for the user's change. */
    do
    {
        moneyRequested = user.check_for_next_bill(moneyRequested);
    }
    while( moneyRequested > 0.01);  // This going until it is greater than 0.01 because if we use 0.00
                                    // then the check_for_next_bill program will continue to subtract
                                    // past 0.01 to 0.001, 0.0001, etc.
    
    /* Output of change given */
    cout << "Changed recieved: " << endl;
    user.output_of_change_given();
    
    return 0;
}
