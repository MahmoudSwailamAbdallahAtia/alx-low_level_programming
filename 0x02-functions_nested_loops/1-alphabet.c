#include "main.h"
/**
 *print_alphabet - print putchar
 */
void print_alphabet(void);
void print_alphabet(void)
{
char letter;
for(letter ='a'; letter <= 'z'; letter++){putchar(letter);
}
putchar('\n');
}
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
        print_alphabet();
        return (0);
}
