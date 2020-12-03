/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 05:08:08 by seplee            #+#    #+#             */
/*   Updated: 2020/12/01 05:28:15 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ( str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *str;

	str = "";
	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}	
