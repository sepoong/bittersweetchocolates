/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:24:40 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 16:13:19 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char        *ft_strcapitalize(char *str)
{
    int        i;
    
    i = 1;
    if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
        str[i - 1] = str[i - 1] - 32;
    while (str[i] != '\0')
    {
        if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
              (str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
              (str[i - 1] >= '0' && str[i - 1] <= '9')))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
}

