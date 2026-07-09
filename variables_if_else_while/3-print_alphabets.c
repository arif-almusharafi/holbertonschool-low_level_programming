#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter ++)
    {
        putchar(letter);
    }
    putchar('\n');

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }
    return (0);
}
