#include <stdio.h>
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
    int number = 0;
    printf("Enter the number of Array: ");
    scanf("%d", &number);

    char *c = malloc(number * sizeof(char));

    if (c == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < number; i++)
    {
        printf("Enter element #%d", i + 1);
        scanf(" %c", &c[i]);
    }

    for(int i = 0; i < number; i++)
    {
        printf("%c ", c[i]);
    }

    free(c);
    c = NULL;

}
