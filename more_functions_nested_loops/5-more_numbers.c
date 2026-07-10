#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, excluding 2 and 4.
 */
void more_numbers(void)
{
	int num;
    for (int i = 0; i < 10; i++)
    {

	    for (num = 0; num <= 14; num++)
        {
            _putchar((num % 10) + '0');
        }
        _putchar('\n');
    }
}
