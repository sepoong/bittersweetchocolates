/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 05:43:27 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 15:23:50 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char  *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[j + i] = src[j];
        j++;
    }
	dest[j + i] = '\0';
    return (dest);
}
int main()
{
    char strr1[40] = "I am legene";
    char strr2[40] = "you are";
    char strr3[40] = "I am legene";
    char strr4[40] = "you are";
    strcat(strr2, strr3);
    printf("%s \n", strr2);
    ft_strcat(strr4, strr1);
    printf("%s", strr4);
}
