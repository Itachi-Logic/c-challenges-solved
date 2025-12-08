/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_string_optimized.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 23:23:32 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/02 23:28:36 by Itachi-Logic     ###   ########.fr       */
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

void	sort_string_optimized(char *str)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	j = 0;
	while (j < len - 1)
	{
		i = 0;
		while (i < (len - 1 - j))
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
	sort_string_optimized(s1);
	printf("%s\n", s1);
	return (0);
}
