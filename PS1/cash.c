#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    do 
    {
        change = get_float("How much change is owed?\n");
        cents = round(change * 100);
    }

    while (change <= 0);

    quarters = cents / 25;
    dimes = (cents % 25) / 10;
    nickels = ((cents % 25) % 10) / 5;
    pennies = ((cents % 25) % 10) % 5;

    printf("Number of coins to give:%d\n", quarters + dimes + nickels + pennies);

}

