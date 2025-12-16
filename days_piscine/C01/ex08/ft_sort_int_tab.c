/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:39:55 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/16 21:51:27 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *first, int *last)
{
	int	temp;

	temp = *first;
	*first = *last;
	*last = temp;
	return ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (tab[j] > tab[j + 1])
				ft_swap(tab + j, tab + j + 1);
			j++;
		}
		i++;
	}
	return ;
}
/*
void	ft_putarry(int *arry)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		printf("%d", arry[i]);
		i++;
	}
	printf("\n");
	return ;
}

int	main(void)
{
	int	arry[] = {3, 1, 6, 2, 4, 8, 5, 7};

	printf("this is original arry:\n");
	ft_putarry(arry);
	ft_sort_int_tab(arry, 8);
	printf("this is new arry:\n");
	ft_putarry(arry);
	return (0);
}
*/
