/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:24:57 by jpark             #+#    #+#             */
/*   Updated: 2022/12/04 20:32:22 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

/*int main(void)
{
    char str[] = "sqafs\aaf3424#$&)ASFASFsfa  sf";
    printf("%s", ft_strupcase(str));
}*/