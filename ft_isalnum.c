#include <stdio.h>

int ft_isalnum(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)|| (i >= 48 && i <= 57))
		return (1);
	return (0);
}
int main(void)
{
    int test = '5';
    if (ft_isalnum(test))
        printf("Le caractére %c est alphanuméric", test);
    else
        printf("Le caractére %c n'est pas alphanuméric", test);

    
}