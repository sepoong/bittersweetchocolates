/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:33:38 by seplee            #+#    #+#             */
/*   Updated: 2020/11/24 00:10:01 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 122)
	{
		write(1, &letter, 1);
		letter++;
	}
}
