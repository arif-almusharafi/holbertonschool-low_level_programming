#include <stdio.h>

void rev_string(char *s)
{
    int i, j, len = 0;
    char *start = s;
    while (*s != '\0')
    {
        len++;
        s++;
    }


    char swap;
    for(i = 0, j = len - 1; i < j ; i++, j--)
    {
        swap = start[i];
        start[i] = start[j];
        start[j] = swap;
    }
}






int main(void)
{

    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);


    return (0);
}
