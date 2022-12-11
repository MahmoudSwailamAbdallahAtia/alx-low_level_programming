#include <stdio.h>
#include <stdlib.h>
/**
 *main- for digits from 0 to 9
 *Return: 0
 */
int main(void)
{
int n = 0;
char m = 'a';
while (n < 10)
{
putchar(n + '0');
n++;
}
while (m <= 'f')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
