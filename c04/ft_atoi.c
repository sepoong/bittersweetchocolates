/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:17:02 by seplee            #+#    #+#             */
/*   Updated: 2020/12/06 03:01:24 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_answer(str[i])
{
	int answer;
	int i;

	i = 0;
	answer = 0;
	answer *= 10;
	answer += str[i] - 48; 
	return (answer);
}

int ft_atoi(char *str)
{
//	int answer;
	int i;
	int minus;
	
	i = 0;
//	answer = 0;
	minus = 1;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
				str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		if ((str[i] >= 33 && str[i] <= 42) || str[i] == 44 ||
				(str[i] >= 46 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 127))
		{
			i++;
			return (0);
		}
		while (str[i] == 43 || str[i] == 45)
		{
			if (str[i] == 45)
			{
				minus *= -1;
			}
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
		//	answer *= 10;
		//	answer += str[i] - 48;
			ft_answer(str[i]);
			if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
				return (answer * minus);
			i++;
		}
	}
	return  (0);
}

int	main(void)
{
	char *str;
	str = " -+--+12 34 -ab567";
	printf("%d\n", ft_atoi(str));
}
