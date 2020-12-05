/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 07:27:43 by seplee            #+#    #+#             */
/*   Updated: 2020/12/03 07:56:24 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        if (str[i] == to_find[j])
        {
            while (str[i + j] != '\0' && str[i + j] == to_find[j])
            {
                if (to_find[j + 1] == '\0')
                    return (&str[i]);
                j++;
            }
        }
        i++;
    }
    return 0;
}
int main()
{
    char str[30] = "A Garden Diary";
    char str2[30] = "A Garden Diary";
    char to_find[5] = "rden";
    if (strstr(str2, to_find) != '\0')
    {
        printf("%s \n", strstr(str2, to_find));
        printf("%p \n", strstr(str2, to_find));
    }
    ft_strstr(str, to_find);
    printf("%s\n", ft_strstr(str, to_find));    // den Diary
    return 0;
}
