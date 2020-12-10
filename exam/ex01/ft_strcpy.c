/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:49:57 by seplee            #+#    #+#             */
/*   Updated: 2020/12/08 22:36:37 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}   //s2를 널 검사, s1 리턴
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char str2[9]	= "YouAreSo";
	char str1[9] = "sss";

	//str2 = "YouAreSoB";
	printf("%s \n",ft_strcpy(str1, str2));
}
