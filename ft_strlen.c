


#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}
int main(void)
{
	char str[]= "salut de  eqd qz";
	printf("le nombre de caractères est %d", ft_strlen(str));
}

