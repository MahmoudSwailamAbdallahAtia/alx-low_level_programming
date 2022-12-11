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
char Alpha = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (Alpha <= 'Z')
{
putchar(Alpha);
Alpha++;
}
putchar('\n');
return (0);
}
