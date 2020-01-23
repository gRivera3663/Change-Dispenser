#ifndef coin_counter_h
#define coin_counter_h

#include <stdio.h>

/* constants -------------------- */

const float HUNDRED_DOLLAR_BILL = 100.00; // Dollars
const float FIFTY_DOLLAR_BILL = 50.00;
const float TWENTY_DOLLAR_BILL = 20.00;
const float TEN_DOLLAR_BILL = 10.00;
const float FIVE_DOLLAR_BILL = 5.00;
const float ONE_DOLLAR_BILL = 1.00;

const float QUARTER = 0.25; // Coins
const float DIME = 0.10;
const float NICKEL = 0.05;
const float PENNY = 0.01;

/* ------------------------------ */

/* "counter" struct used for tracking bills and coins needed. */
struct counter
{
private:
    int howMany100 = 0;
    int howMany50 = 0;
    int howMany20 = 0;
    int howMany10 = 0;
    int howMany5 = 0;
    int howMany1 = 0;
    int howManyQuarter = 0;
    int howManyDime = 0;
    int howManyNickel = 0;
    int howManyPenny = 0;
public:
    float check_for_next_bill(float remaining_amount);  // Adding more bills to the total change counters
    void output_of_change_given();  // Outputting the change needed onto the console
    
    /* Returning private variables */
    int hundreds_needed() { return howMany100; };
    int fifties_needed() { return howMany50; };
    int twenties_needed() { return howMany20; };
    int tens_needed() { return howMany10; };
    int fives_needed() { return howMany5; };
    int ones_needed() { return howMany1; };
    int quarters_needed() { return howManyQuarter; };
    int dimes_needed() { return howManyDime; };
    int nickels_needed() { return howManyNickel; };
    int pennies_needed() { return howManyPenny; };
};

#endif
