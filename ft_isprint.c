

#include <stdio.h>

int	ft_isprint(int i)
{
	if(i >= 32 && i <= 127)
		return (1);
	else
		return (0);
}
int main(void)
{
	int test = 'p';
	if(ft_isprint(test))
		printf("le caractère %i est imprimable", test);
	else
		printf("le caractère %i n'est pas imprimable", test);
}

