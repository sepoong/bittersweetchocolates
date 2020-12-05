/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:03:42 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 13:18:34 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_hexa(char c)
{
    int        negative_char;
    char    hex_n1;
    char    hex_n2;
    
    ft_putchar('\\');
    if (c < 0)
    {
        negative_char = (-128 - (c)) * -1 + 128;
        hex_n1 = negative_char / 16;
        hex_n2 = negative_char % 16;
    }
    else
    {
        hex_n1 = c / 16;
        hex_n2 = c % 16;
    }
    if (hex_n1 < 10)
        ft_putchar(hex_n1 + '0');
    else
        ft_putchar(hex_n1 + 87);
    if (hex_n2 < 10)
        ft_putchar(hex_n2 + '0');
    else
        ft_putchar(hex_n2 + 87);
}

void    ft_putstr_non_printable(char *str)
{
    int        i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else
        {
            ft_print_hexa(str[i]);
        }
        i++;
    }
}

int main()
{
    char str[] = "Coucou\0atu vas bien ?;
    
