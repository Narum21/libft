



int ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c - 32);
	else
		return (c);
}
#include <stdio.h>
int main(void)
{
	int test = 'P';
	if(ft_tolower(test))
		printf("%c se transforme en %c", test, ft_tolower);
}


