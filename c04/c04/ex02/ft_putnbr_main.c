/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:15:24 by seplee            #+#    #+#             */
/*   Updated: 2020/12/05 18:11:42 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else
    {
        if (nb > 9)
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar(48 + nb % 10);
    }
}

int        main(void)
{
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(4242);
    ft_putchar('\n');
    ft_putnbr(20000706);
    ft_putchar('\n');
    ft_putnbr(+2147483647);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
}
