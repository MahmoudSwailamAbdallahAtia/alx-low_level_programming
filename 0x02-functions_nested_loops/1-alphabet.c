#include "main.h"
/**
 * main - main functions
 * pointer - function pointer
 * print_alphabet - print putchar
 * Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
void(*pointer)(void);
pointer = print_alphabet;
pointer();
return (0);
}
void print_alphabet(void)
{
char letter;
for(letter ='a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
