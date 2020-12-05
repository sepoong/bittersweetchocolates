/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 06:35:26 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 15:28:58 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char  *ft_strncat(char *dest, char *src, unsigned int nb)
{
   	unsigned int i;
    unsigned int j;
    //  unsigned int n;
    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < nb )
    {
        dest[j + i] = src[j];
        j++;
    }
    dest[j + i] = '\0';
    return (dest);
}
int main()
{
    char strr1[40] = "12345678";
    char strr2[40] = "1234";
    char strr3[40] = "12345678";
    char strr4[40] = "1234";
    strncat(strr2, strr3, 5);
    printf("%s \n", strr2);
    ft_strncat(strr4, strr1, 5);
    printf("%s", strr4);
}
