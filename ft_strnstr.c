/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgodino <fgodino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:26:38 by fgodino           #+#    #+#             */
/*   Updated: 2024/11/07 18:33:42 by fgodino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t len;
    size_t j;
    size_t i;

    i = 0;
    j = 0;

    if (!big || !little)
        return (NULL);
    if (!little)
        return (big);
    while (big[i])
    {
        if (big[i] == little[j] && little[j])
        {
            i++;
            j++;
            return ((char *) big + i);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char big[] = "salut les gens";
    char little[]= "les";
    
}