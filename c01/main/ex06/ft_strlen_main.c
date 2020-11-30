/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:39:52 by seplee            #+#    #+#             */
/*   Updated: 2020/11/30 15:11:46 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' )
	{
		++i ;
	}
	
return (i);
}

int	main()
{
	char *strr;
	int number;

	strr = "I am Legend.";
	number = ft_strlen(strr);
printf("%d, " ,number);

 }
