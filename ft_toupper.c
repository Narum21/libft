

#include <stdio.h>
int ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		return (c - 32);
	else 
		return (c);
}
int main(void)
{
	int test = '1';
	if(ft_toupper(test))
		printf("%c devient %c", test, ft_toupper(test));
}

