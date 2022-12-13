#include <stdio.h>
/**
 *main - print putchar
 *Return: 0
 */
void print_alphabet_x10();
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10()
{
for (int i = 0; i < 10; i++)
{
for (char letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
}
