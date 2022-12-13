#include <stdio.h>
/**
 *main - print putchar
 *Return: 0
 */
void print_alphabet();
void print_alphabet()
{
for (char letter ='a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
