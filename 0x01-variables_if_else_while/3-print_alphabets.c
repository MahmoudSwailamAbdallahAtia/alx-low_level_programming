#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main- print alphapet in lowercase and then uppercase
 *Return: 0
 */
int main(void)
{
char alpha = 'a';
char Alpha = 'A';
while (alpha <= 'z' && Alpha <= 'Z')
{
putchar(alpha);
putchar(Alpha);
alpha++;
Alpha++;
}
putchar('\n');
return (0);
}
