/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 19:17:02 by seplee            #+#    #+#             */
/*   Updated: 2020/12/07 09:20:19 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_space(char str)
{
	return ((str == ' ' || str == '\n' || str == '\t' ||
				str == '\v' || str == '\f' || str == '\r'));
}

int		ft_atoi(char *str)
{
	int answer;
	int i;
	int minus;

	i = 0;
	answer = 0;
	minus = 1;
	while (ft_space(str[i]))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		answer *= 10;
		answer += str[i] - 48;
		if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			return (answer * minus);
		i++;
	}
	return (0);
}
