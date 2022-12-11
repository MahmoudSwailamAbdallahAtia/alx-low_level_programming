#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 *main- condition if
 *Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{printf("%dis positive\n", n);
}
else if (n == 0)
{printf("%dis zero\n", n);
}
else
{printf("%dis negative\n", n);
}
return (0);
}
