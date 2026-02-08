/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params_v2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 09:26:28 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/02/08 09:43:23 by Itachi-Logic     ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	char	**ptr;

	(void)argc;
	ptr = argv;
	while (*ptr)
		ptr++;
	ptr--;
	while (ptr > argv)
	{
		ft_putstr(*ptr);
		ptr--;
	}
	return (0);
}
