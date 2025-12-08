/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_by_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 19:41:16 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/08 20:01:04 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_compare_len(char *s1, char *s2)
{
	int	lens1;
	int	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	return (lens1 - lens2);
}

void	ft_swap(char **c1, char **c2)
{
	char	*temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
	return;
}

int	ft_tab_len(char **arry)
{
	int	len;

	len = 0;
	while (arry[len])
		len++;
	return (len);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	len;

	len = ft_tab_len(tab);
	j = 0;
	while (j < len - 1)
	{
		i = 0;
		while (i < (len - 1 - j))
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
	return;
}

void	sort_by_len(char **tab)
{
	ft_advanced_sort_string_tab(tab, ft_compare_len);
	return;
}

int	main(void)
{
	int	i;
	char *tab[] = {"elephant", "cat", "bird", "dog", "hippopotamus", NULL};
	
	sort_by_len(tab);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
