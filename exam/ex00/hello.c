/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:37:38 by seplee            #+#    #+#             */
/*   Updated: 2020/12/08 14:43:53 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	char *srt;
	int i;

	i = 0;
	srt = "hello world!";
	while (srt[i])
	{
		write(1, &srt[i], 1);
		i++;
	}
	write(1, "\n", 1);
}		
