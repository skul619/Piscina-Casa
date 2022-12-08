/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:13:22 by jpark             #+#    #+#             */
/*   Updated: 2022/12/04 18:18:08 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 96 && str[i] < 123)
            i++;
        else
            return (0);
    }
    return (1);
}

/*int main(void)
{
    char str[] = "asfassFFASF";
    printf("%d", ft_str_is_lowercase(str));
}*/