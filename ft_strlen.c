/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:11:36 by fgodino           #+#    #+#             */
/*   Updated: 2025/01/13 17:26:16 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

