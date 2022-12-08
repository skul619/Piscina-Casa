/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:10:01 by jpark             #+#    #+#             */
/*   Updated: 2022/12/04 20:24:27 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 31 && str[i] < 127)
        {
            i++;
        }
        else
            return (0);
    }
    return (1);
}

/*int main(void)
{
    char str[] = "asfasfaS\n\aAFASF3523525@!#";
    printf("%d", ft_str_is_printable(str));
}*/