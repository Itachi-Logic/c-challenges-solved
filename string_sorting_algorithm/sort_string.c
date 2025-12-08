/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 21:38:19 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/02 22:50:58 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char s1, char s2)
{
	return ((unsigned char) s1 - (unsigned char )s2);
}

void	ft_swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
	return;
}

void	sort_string(char *str)
{
	int	i;
	int	flag;

	if (!str || !str[0])
		return;
	flag = 0;
	while (flag == 0)
	{
		i = 0;
		flag = 1;
		while (str[i + 1])
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				ft_swap((str + i), (str + i + 1));
				flag = 0;
			}
			i++;
		}
	}
	return;
}

int	main(void)
{
	char s1[] = "421337";
	sort_string(s1);
	printf("%s\n", s1); // Expected: "123347"
	return (0);
}
