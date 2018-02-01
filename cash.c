#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)

// Define the change
{
    // Define variable change, then get input from user
    float change;
    do
    {
        change = get_float ("How much change do you need? ");
    }
    while (change < 0);

    // Convert to cents
    int cents = round (change * 100);

    // calculating coins by dividing
    int coins = 0;

    coins += cents / 25;
    cents = cents % 25;

    coins += cents / 10;
    cents = cents % 10;

    coins += cents / 5;
    cents = cents % 5;

    coins += cents;

    // print number of coins
    printf("%i\n", coins);
}