/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:57:06 by seplee            #+#    #+#             */
/*   Updated: 2020/12/08 15:18:52 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	char i;
	char j;

	i = 'a';
	j = 'B';
	while (i <= 'y' && j <= 'Z')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i += 1;
		j += 1;
		i++;
		j++;
	}
	write(1, "\n", 1);
}
