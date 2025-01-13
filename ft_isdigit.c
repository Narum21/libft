/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:13:58 by fgodino           #+#    #+#             */
/*   Updated: 2025/01/13 17:26:24 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int i)
{

	if(i >= 48 && i <= 57)
		return (1);
	return (0);
}
int main(void)
{
    int test_char = 'a';  // Caractère '0' (ASCII 48) ou tu peux utiliser un autre chiffre

    // Appel de ft_isdigit et affichage du résultat
    if (ft_isdigit(test_char))
        printf("'%c' est un chiffre.\n", test_char);
    else
        printf("'%c' n'est pas un chiffre.\n", test_char);

    return 0;
}
