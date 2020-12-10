/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 03:09:24 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 04:25:25 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //

int		ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		r = r * 10 + *s - '0';
		s++;
	}
	return (sign * (int)r);
}

int		main(void)//
{//
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));//
}//


#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int number;

	i = 0;
	minus = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <=  13) || str[i] ==  32)
				i++;
	while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				minus *= -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number = number + str[i] - 48; //Do not change the order or  'number = number *10 + str[i] -48'
		i++;
	}
	return (number * minus);
}	

int		main(void)
{
	char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";
	
	printf("%d\n",ft_atoi(a));

}
