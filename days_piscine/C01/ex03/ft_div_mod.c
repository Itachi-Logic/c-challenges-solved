/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:23:56 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/15 20:32:19 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return ;
}
/*
int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	printf("this old value:\ndiv = %i\nmod = %i\n", div, mod);
	ft_div_mod(9, 2, &div, &mod);
	printf("this new value:\ndiv = %i\nmod = %i\n", div, mod);
	return (0);
}
*/
