#include <stdio.h>
#include <stdlib.h>
/**
 *main- for digits from 0 to 9
 *Return: 0
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
putchar(',');
n++;
}
putchar('\n');
return (0);
}
