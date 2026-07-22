#include <stdio.h>


void print_rev(char *s)
{
	int len = 0;
	char *start = s;
	printf("start pointer %c\n", *s);
	while(*s != '\0')
	{
		len++;
		s++;
	}
	printf("end pointer %c\n", *s);
	int x;

	for( x = len -1; x >= 0 ; x--)
	{
		putchar(start[x]);
	}
}


int main(void)
{
	char *str;

    str = "arif";
    print_rev(str);
    return (0);
}
