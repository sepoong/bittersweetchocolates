/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:16:36 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 20:25:36 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_char(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	int		index;
	int		i;

	i = 0;
	while (str[i])
		i++;
	index = 0;
	while (index < i / 2)
	{
		ft_swap_char(&str[index], &str[i - 1 - index]);
		index++;
	}
	return (str);
}
