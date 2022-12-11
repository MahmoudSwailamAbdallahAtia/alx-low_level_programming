#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main- print alphapet in lowercase
 *Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
char Alpha = 'A';
while (Alpha <= 'Z')
{
putchar(Alpha);
Alpha++;
}
putchar('\n');
return (0);
}
