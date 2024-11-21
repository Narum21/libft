/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:26:38 by fgodino           #+#    #+#             */
/*   Updated: 2024/11/21 22:59:05 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t lon)
{
    size_t j;
    size_t i;
    size_t lon1;
 
    if (!little && !needle)
        return (NULL);
    if (ft_strlen(needle) == 0)
	    return ((char *) big);
    lon = ft_strlen(needle);
    i = 0;
    while (big[i] && i < lon)
    {
        j = 0;
        while (big[i + j] && big[i + j] == needle[j] && i + j < lon)
            j++;
        if (j == lon1)
                return ((char *) big + i);
        i++;
    }
    return (NULL);
}
