/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:48:56 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 14:47:24 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned size)
{
	unsigned int i;
	unsigned int number;
	
	number = 0;
	i = 0; 
	while ( i < size - 1 && src[i] != '\0')
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

int main()
{
	char str[29] = "You are sosososo Beautiful~!";
	char cop[15];
	char cop2[20];

	strlcpy(cop, str, 10);
	printf("%s \n", cop);

	ft_strlcpy(cop2, str, 10);
	printf("%s \n", cop2);	
	printf("%d", ft_strlcpy(cop2, str, 10));
}
