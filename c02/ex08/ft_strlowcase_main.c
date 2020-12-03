/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:49:43 by seplee            #+#    #+#             */
/*   Updated: 2020/12/02 16:19:08 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 32;
		}
		i++;
	}
	return  (str);
}

int	main()
{
	char *str;

	str = "YOU ARE so BEAUTIFUL";
	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
}

		
