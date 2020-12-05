/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:15:03 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 10:20:32 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	
    i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
    }
	return (s1[i] - s2[i]);
}
	
	
int main()
{
	char *strr1 = "you are so beautiful";
	char *strr2 = "you are s o  beautiful";
	printf("%d \n", strcmp(strr1, strr2));
	printf("%d ", ft_strcmp(strr1, strr2));
}
