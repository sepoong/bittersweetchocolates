/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:35:26 by seplee            #+#    #+#             */
/*   Updated: 2020/12/03 07:06:53 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\n' && i < nb)
		i++;
	while (src[j] != '\n' && j < nb)
		j++;
	dest[i + j] = src[j];
		return (dest);
}

int	main()
{
	char strr1[40] = "you are so beautiful";
	char strr2[40] = "she is so beautiful";
	char strr3[40] = "you are so beautiful";

	strncat(strr2, strr1, 5);
	printf("%s \n", strr2);
	ft_strncat(strr2, strr3, 5);
	printf("%s",ft_strncat(strr2, strr3, 5));
}
