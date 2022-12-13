#include "main.h"
/**
*main - print putchar
*Description: funprint for printing word of array
*funprint - printing
*Return: 0
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
int main(void)
{
funprint();
return (0);
}
