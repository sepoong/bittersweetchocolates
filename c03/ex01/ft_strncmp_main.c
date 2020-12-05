/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 04:44:55 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 15:25:23 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i + 1 < n) 
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char *strr1 = "he is Legend";
	char *strr2 = "I am lenden2";

	ft_strncmp(strr1, strr2, 3);
	printf("%d \n", strncmp(strr1, strr2, 3));
	printf("%d ", ft_strncmp(strr1, strr2, 3));
}
