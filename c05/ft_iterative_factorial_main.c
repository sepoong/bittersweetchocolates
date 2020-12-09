/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 01:30:07 by seplee            #+#    #+#             */
/*   Updated: 2020/12/09 11:00:07 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		if (i == nb)
			return (result);
		i++;
	}
	if (nb == 0)
		return (1);
	return (0);
}

int main()
{
	int i;

	i = -3;
	printf("%d \n", ft_iterative_factorial(i));
	return (0);
}
