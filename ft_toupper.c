/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:17:18 by fgodino           #+#    #+#             */
/*   Updated: 2025/01/13 17:25:52 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

