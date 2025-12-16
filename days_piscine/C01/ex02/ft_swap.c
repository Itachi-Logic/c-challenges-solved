/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:11:51 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/15 20:17:09 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
	return ;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 22;
	printf("this old value:\na = %i\nb = %i\n", a, b);
	ft_swap(&a, &b);
	printf("this new value:\na = %i\nb = %i\n", a, b);
	return (0);
}
*/
