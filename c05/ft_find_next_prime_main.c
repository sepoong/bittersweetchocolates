/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 00:28:23 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 13:14:16 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_prime(int nb)
{
	long long i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
    }
	return (nb);
}

int ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_prime(nb) == 0)
		nb++;
	return (nb);
}

int main()
{
	int nb;

	nb = 21400483641;
	printf("%d", ft_find_next_prime(nb));
}
