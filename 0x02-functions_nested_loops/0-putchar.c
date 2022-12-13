#include "main.h"
/**
 *main - print putchar
 *Return: 0
 */
void funprint()
{
char word[] = {'_','p','u','t','c','h','a','r'};
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
