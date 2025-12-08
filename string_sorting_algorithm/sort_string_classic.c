/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_string_classic.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 22:48:45 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/02 23:31:21 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char c1, char c2)
{
	return ((unsigned char) c1 - (unsigned char) c2);
}

void	ft_swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
	return;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	sort_string_classic(char *str)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	j = 0;
	while (j <= len - 1)
	{
		i = 0;
		while (str[i + 1])
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				ft_swap((str + i), (str + i + 1));
			}
			i++;
		}
		j++;
	}
}

int	main(void)
{
	char s1[] = "421337";
	sort_string_classic(s1);
	printf("%s\n", s1);
	return (0);
}

