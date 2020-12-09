/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:36:59 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 11:03:06 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return 0;
}

int	main()
{
	int nb;
	int power;

	nb = -7;
	power = 0;
	printf("%d \n", ft_recursive_power(nb, power));
}
