/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:13:08 by fgodino           #+#    #+#             */
/*   Updated: 2025/01/13 17:25:57 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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