#include <stdio.h>
#include <cs50.h>
#include <math.h>

//this is a function
float get_positive(void);

//this is the main part
int main(void)
{
    //this gets a positive float
    float change = get_positive();
    //this turns the float into an int
    int cents = round(change * 100);
    //this counts the coins
    int coins = 0;
    //this determines the right number of quarters 
    while (cents >= 25)
    {
        //this adds to the count of coins
        coins++;
        //this substracts the quarter from the change
        cents = cents - 25;
    }
    
    //this counts the dimes
    while (cents >= 10)
    {
        coins++;
        cents = cents - 10;
    }
    
    //nickles
    while (cents >= 5)
    {
        coins++;
        cents = cents - 5;
    }
    
    //pennies
    while (cents >= 1)
    {
        coins++;
        cents = cents - 1;
    }

//this gives the user the number of coins
    printf("%i\n", coins);
}

//this prompts the user for a positive number
float get_positive(void)
{
    float n;
    do
    {
        n = get_float("Hello user, how much change is owned?\n");
    }
    while (n < 0);
    return n;
}
    
