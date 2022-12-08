/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:01:07 by jpark             #+#    #+#             */
/*   Updated: 2022/12/04 21:46:02 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowercase(char *st)
{
    int i;
    
    i = 0;
    while (st[i] != '\0')
    {
        if (st[i] > 64 && st[i] < 91)
        {
            st[i] = st[i] + 32;
        }
        i++;
    }
    return (st);
}

char    *ft_strcapitalize(char *str)
{
    int i;

    ft_strlowercase(str);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[0] > 96 && str[0] < 123)
        {
            str[0] = str[0] - 32;
        }
        else if ((str[i + 1] > 96 && str[i + 1] < 123) 
            && ((str[i] < 33) || str[i] == 43 || str[i] == 45))
            {
                str[i + 1] = str[i + 1] - 32;
            }
        else
            i++;
    }
    return (str);
}

/*int main(void)
{
    char str[] = "\tsalut, comMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}*/