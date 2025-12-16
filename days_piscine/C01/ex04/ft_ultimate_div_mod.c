/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:34:03 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/16 19:02:51 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
	return ;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("the old value:\na = %i\nb = %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("the new value:\na = %i\nb = %i\n", a, b);
	return (0);
}
*/
