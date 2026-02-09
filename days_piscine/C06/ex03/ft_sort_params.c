/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 09:44:59 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/02/09 15:34:40 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

static int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

static void	ft_swap_ptr(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	main(int argc, char *argv[])
{
	int	current;
	int	next_el;
	int	min_el;

	current = 1;
	while (current < argc - 1)
	{
		min_el = current;
		next_el = min_el + 1;
		while (next_el < argc)
		{
			if (ft_cmp(argv[min_el], argv[next_el]) > 0)
				min_el = next_el;
			next_el++;
		}
		if (min_el != current)
			ft_swap_ptr(&argv[current], &argv[min_el]);
		current++;
	}
	while (*++argv)
		ft_putstr(*argv);
	return (0);
}
