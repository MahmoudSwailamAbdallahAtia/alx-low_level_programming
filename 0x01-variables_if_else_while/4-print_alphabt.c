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
if (alpha == 'q' || alpha == 'e')
{
continue;
}
alpha++;
}
putchar('\n');
return (0);
}
