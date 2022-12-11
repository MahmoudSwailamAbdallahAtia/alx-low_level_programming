#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 *main- printing the last digit of random number
 *Return: always be 0
 */
int main (void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  printf("Last digit of %d is %d and is greater than 5", &n, n); 
  return (0);
}
