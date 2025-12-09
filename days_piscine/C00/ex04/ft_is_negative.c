/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:45:41 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/09 21:00:34 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else if (n < 0)
		ft_putchar('N');
	return ;
}
/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
