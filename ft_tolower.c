/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:16:54 by fgodino           #+#    #+#             */
/*   Updated: 2025/01/13 17:25:54 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


