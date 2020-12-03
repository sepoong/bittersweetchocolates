/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 05:43:27 by seplee            #+#    #+#             */
/*   Updated: 2020/12/03 06:29:08 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	dest[j + i] = src[i];
	return (dest);
}


int	main()
{
	char strr1[40] = "I am";
	char strr2[40] = "you are";
	char strr3[40] = "I am";

	strcat(strr2, strr3);
	printf("%s \n", strr2);
	ft_strcat(strr2, strr1);
	printf("%s", strr2);
}
