/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seplee <seplee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:11:09 by seplee            #+#    #+#             */
/*   Updated: 2020/12/10 16:53:28 by seplee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//int main(int ac, char **av)
//{
//	int i;
//	int j;
//	char *temp;
//
//	i = 0;
//	temp = 0;
//	if (ac == 3)
//	{
//		while (av[1][i])
//		{
//			j = 0;
//			while (av[2][j])
//			{
//				if (av[1][i] == av[2][j])
//					*temp = av[1][i];
//					write(1, temp, 1);
//					j++;
//			}
//			i++;
//		}
//		write(1, "\n", 1);
//	}
//	return (0);
//}



void inter(char *str1, char *str2);

int main(int argc, char** argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
}

void inter(char *str1, char *str2)
{
	int j;
	char check[256];
	int i;

	j = 0;
	while (j < 256)
		check[j++] = 0; // 모든 배열을 0으로 초기.:
	i = 0;

	while (str1[i] != 0)
	{
		j = 0;
		while (str2[j] != 0)
		{
			if (str1[i] == str2[j] && check[(int)str1[i]] == 0)
			{   
				check[(int)str1[i]] = 1; // 일로 세팅되기 때문에 다시 같은 수가반복
				write(1, &str1[i], 1);  //되면 조건 값에 의해 패스, str1에다 하는거
							}
			j++;
		}
		i++;
	}
}
