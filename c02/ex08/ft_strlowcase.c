/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:50:36 by jpark             #+#    #+#             */
/*   Updated: 2022/12/04 20:58:38 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 64 && str[i] < 91)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

/*int main(void)
{
    char str[] = "ASDSAD^&*\aasfasfA S\t aFFF";
    printf("%s", ft_strlowcase(str));
}*/