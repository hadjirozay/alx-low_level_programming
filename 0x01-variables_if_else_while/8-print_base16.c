#include <stdio.h>

/**
 * main - hexadecimal
 * Return: 0 always
 */

int main(void)
{
int i;
char s;

for (i = 0; i <= 10; i++)
putchar(i + 'o');
for (s = 'a'; s <= 'f'; s++)
putchar (s);
putchar('\n');
return (0);
}
