/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:12:22 by fgodino           #+#    #+#             */
/*   Updated: 2025/01/13 17:25:44 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int nombre;
    int signe;
    int i;

    signe = 1;
    nombre = 0;
    i = 0;

    while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            signe = -signe;
        i++;
    }
    while (str[i] && (str[i] <= '9' && str[i] >= '0'))
    {
        nombre = nombre * 10 + (str[i] - '0');
        i++;
        
    }
    return (nombre * signe);
}