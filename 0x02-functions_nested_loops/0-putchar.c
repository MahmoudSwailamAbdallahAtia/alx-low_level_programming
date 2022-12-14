#include "main.h"
/**
*fun_word - printing a string with putchar
*/
void fun_word(void);
void fun_word(void)
{
char word[] = "_putchar";
int i;
for (i = 0; word[i] != '\0'; i++)
{
putchar(word[i]);
}
putchar('\n');
}
/**
*main - represinting function fun_word
*Return:0
*/
int main(void)
{
fun_word();
return (0);
}
