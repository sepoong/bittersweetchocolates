/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 23:04:42 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 13:48:06 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int i;

	i = 2;
	while (i < (unsigned int)nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb == 0 || nb == 1)
		return (0);
	return (1);
}
