#include <stdio.h>
/**
 *  * main - prints hexadecimal
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 0;
	char ch2 = 'a';

	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	while (ch2 <= 'f')
	{
		putchar (ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
