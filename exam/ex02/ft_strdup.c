/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:48:14 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 13:54:08 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0; 
	while (*str) // destㄱㅏ 아니라 str로 측정해야 함
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;
	int j;

	i = ft_strlen(src);
//	while (src[i])
//		i++;
	if (!(dest = (char *)malloc(sizeof(char) * (i + 1))))
			return (0);
	j = 0;
//	dest[i] = '\0';
	while (*src)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
