#include "main.h"
/**
*funprint - printing
*/
void funprint(void)
{
char word[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i;
for (i = 0; i < 8; i++)
{
putchar(word[i]);
}
putchar('\n');
}
/**
*main - represinting
*Return:0
*/
int main(void)
{
funprint();
return (0);
}
