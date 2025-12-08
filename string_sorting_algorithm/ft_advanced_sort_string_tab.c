/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 19:16:28 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/08 19:38:19 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	ft_rev_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s2 - *(unsigned char *)s1);
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

int	main(void)
{
	int	i;
	char	*tab[] = {"zebra", "apple", "1337", "42", "Moulinette",
		"moulinette", "!", "banana", "cherry", "code", "Coder",
		"segfault", "bus_error", "success", "101", "ZEBRA", NULL
	};

	ft_advanced_sort_string_tab(tab, ft_rev_strcmp);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
