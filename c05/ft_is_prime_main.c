/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 23:04:42 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 09:19:20 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
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

int main()
{
	int nb;

	nb = 2;
	printf("%d", ft_is_prime(nb));
}
