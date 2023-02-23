#include <main.h>
#include <unistd.h>
/**
 * _putchar - writesthe character c to stdout
 * @C: The character to print 
 *
 * Return: on success 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
