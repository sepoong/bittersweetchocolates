/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:21:25 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 09:15:53 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int i;

	i = 0;
	while (i <= (unsigned int) nb)
	{
		if (i * i == (unsigned int)nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main()
{
	int nb;

	nb = 100;
	printf("%d", ft_sqrt(nb));
	return (0);
}
