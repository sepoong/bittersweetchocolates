/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:48:56 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 15:49:23 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned size)
{
	unsigned int i;
	unsigned int number;

	number = 0;
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[number])
	{
		number++;
	}
	return (number);
}
