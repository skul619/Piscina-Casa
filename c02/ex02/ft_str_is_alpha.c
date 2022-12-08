/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:17:58 by jpark             #+#    #+#             */
/*   Updated: 2022/12/08 11:38:57 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 
            && str[i] < 123))
            i++;
        else
            return (0);
    }
    return (1);
}

/*int main(void)
{
    char str[] = "Fas535fffvxzweqt";
    printf("%d", ft_str_is_alpha(str));
}*/