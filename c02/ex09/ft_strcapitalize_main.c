/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:24:40 by seplee            #+#    #+#             */
/*   Updated: 2020/12/02 18:04:00 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >=97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}

		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
	return (str);
}

int	main()
{
	char str[] = "you are sO beautiful 2o me for+eveR+a";

	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
}
