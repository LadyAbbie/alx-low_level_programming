#include "main.h"

/**
 * check_int - checks integer as candidate for prime number
 * @prime number: prime number integer
 * @x: integer
 * Return: 1 if
 */

int is_prime_number(int n);
   int loop, number;
   int prime = 1;
   
   number = 11;

   for(loop = 2; loop < number; loop++) {
      if((number % loop) == 0) {
         prime = 0;
      }
   }

   if (prime == 1)
      printf("%d is prime number.", number);
   else
      printf("%d is not a prime number.", number);
   return 0;
}