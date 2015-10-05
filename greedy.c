#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "cs50.h"
#include "cs50.c"

int main (void)
{
   float change;
  //declaring a variable for coins needed
   int counter = 0;
  //do-while loop
   do
   {
     printf("How much do you owe?: ");
     change = GetFloat();
   }
   while (change < 0);
 //declaring a variable for balance
   int balance = 0;
 //declaring constants
   int const quarter = 25;
   int const dime = 10;
   int const nickel = 5;
   int const penny = 1;
 //to cents
   balance = round(change * 100);
 //quarters
  counter += balance / quarter;
  balance %= quarter;
 //dimes
  counter += balance / dime;
  balance %= dime;
 //nickels
  counter += balance / nickel;
  balance %= nickel;
 //pennies:
  counter += balance / penny;
  balance %= penny;

  counter = round(counter);
  //printing the output
  printf("%i\n", counter);
}
