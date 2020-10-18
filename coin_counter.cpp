#include<iostream>
#include<string>
#include"coin_counter.h"

using namespace std;

/* Adding more bills to the total change counters */
float counter::check_for_next_bill(float remaining_amount)
{
    /* If the total amount of change needed by the user exceeds more than a value of a certain
     bill or coin then then one of that bill or coin is recorded in the struct. That currency
     amount is also deducted from the total amount of change needed. */
    
    if (remaining_amount >= HUNDRED_DOLLAR_BILL)
    {
        remaining_amount = remaining_amount - HUNDRED_DOLLAR_BILL;
        ++howMany100;
    }
    else if(remaining_amount >= FIFTY_DOLLAR_BILL && remaining_amount < HUNDRED_DOLLAR_BILL )
    {
        remaining_amount = remaining_amount - FIFTY_DOLLAR_BILL;
        ++howMany50;
    }
    else if(remaining_amount >= TWENTY_DOLLAR_BILL && remaining_amount < FIFTY_DOLLAR_BILL)
    {
        remaining_amount = remaining_amount - TWENTY_DOLLAR_BILL;
        ++howMany20;
    }
    else if(remaining_amount >= TEN_DOLLAR_BILL && remaining_amount < TWENTY_DOLLAR_BILL)
    {
        remaining_amount = remaining_amount - TEN_DOLLAR_BILL;
        ++howMany10;
    }
    else if(remaining_amount >= FIVE_DOLLAR_BILL && remaining_amount < TEN_DOLLAR_BILL)
    {
        remaining_amount = remaining_amount - FIVE_DOLLAR_BILL;
        ++howMany5;
    }
    else if(remaining_amount >= ONE_DOLLAR_BILL && remaining_amount < FIVE_DOLLAR_BILL)
    {
        remaining_amount = remaining_amount - ONE_DOLLAR_BILL;
        ++howMany1;
    }
    else if(remaining_amount >= QUARTER && remaining_amount < ONE_DOLLAR_BILL)
    {
        remaining_amount = remaining_amount - QUARTER;
        ++howManyQuarter;
    }
    else if (remaining_amount >= DIME && remaining_amount < QUARTER)
    {
        remaining_amount = remaining_amount - DIME;
        ++howManyDime;
    }
    else if(remaining_amount >= NICKEL && remaining_amount < DIME)
    {
        remaining_amount = remaining_amount - NICKEL;
        ++howManyNickel;
    }
    else if(remaining_amount >= PENNY && remaining_amount < NICKEL)
    {
        remaining_amount = remaining_amount - PENNY;
        ++howManyPenny;
    }
    
    /* Returning this float back to main to redo process. */
    return remaining_amount;
}

/* Outputting the change needed onto the console */
void counter::output_of_change_given()
{
    /* Basically this is outputting all bills and/or coins that
     will be a part of the user's change. However, if a certain
     bill or coin isn't needed, it will not show on the console,
     for example, as "0 $10 Bills." We just output what will be
     needed.
     
     We obtain the numbers from the return functions in the struct.
     
     There are two if statements: one for a singular cout statement
     and one for a plural cout statement. */
    
    if (hundreds_needed() == 1)
    {
        cout << hundreds_needed() << " $100 Bill" << endl;
    }
    else if (hundreds_needed() > 1)
    {
        cout << hundreds_needed() << " $100 Bills" << endl;
    }
    
    if (fifties_needed() == 1)
    {
        cout << fifties_needed() << " $50 Bill" << endl;
    }
    else if (fifties_needed() > 1)
    {
        cout << fifties_needed() << " $50 Bills" << endl;
    }
    
    if (twenties_needed() == 1)
    {
        cout << twenties_needed() << " $20 Bill" << endl;
    }
    else if (twenties_needed() > 1)
    {
        cout << twenties_needed() << " $20 Bills" << endl;
    }
    
    if (tens_needed() == 1)
    {
        cout << tens_needed() << " $10 Bill" << endl;
    }
    else if (tens_needed() > 1)
    {
        cout << tens_needed() << " $10 Bills" << endl;
    }
    
    if (fives_needed() == 1)
    {
        cout << fives_needed() << " $5 Bill" << endl;
    }
    else if (fives_needed() > 1)
    {
        cout << fives_needed() << " $5 Bills" << endl;
    }
    
    if (ones_needed() == 1)
    {
        cout << ones_needed() << " $1 Bill" << endl;
    }
    else if (ones_needed() > 1)
    {
        cout << ones_needed() << " $1 Bills" << endl;
    }
    
    if (quarters_needed() == 1)
    {
        cout << quarters_needed() << " Quarter" << endl;
    }
    else if (quarters_needed() > 1)
    {
        cout << quarters_needed() << " Quarters" << endl;
    }
    
    if (dimes_needed() == 1)
    {
        cout << dimes_needed() << " Dime" << endl;
    }
    else if (dimes_needed() > 1)
    {
        cout << dimes_needed() << " Dimes" << endl;
    }
    
    if (nickels_needed() == 1)
    {
        cout << nickels_needed() << " Nickel" << endl;
    }
    else if (nickels_needed() > 1)
    {
        cout << nickels_needed() << " Nickels" << endl;
    }
    
    if (pennies_needed() == 1)
    {
        cout << pennies_needed() << " Penny" << endl;
    }
    else if (pennies_needed() > 1)
    {
        cout << pennies_needed() << " Pennies" << endl;
    }
}
