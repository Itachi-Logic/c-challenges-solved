/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:53:29 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2026/02/09 21:58:35 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	long long	len;
	int			*dest;
	int			*ptr;

	if (min >= max)
		return (0);
	len = (long long)max - (long long)min;
	dest = (int *) malloc(len * sizeof(int));
	if (dest == 0)
		return (dest);
	ptr = dest;
	while (min < max)
		*(dest++) = min++;
	return (ptr);
}
/*
int	main(int argc, char *argv[])
{
	int	*dest;
	long long	len;
	long long	i;

	if (argc != 3)
		return (1);
	dest = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (dest == 0)
		return (1);
	len = (long long)atoi(argv[2]) - (long long)atoi(argv[1]);
	i = 0;
	while (i < len)
	{
		printf("<%i> ", dest[i]);
		i++;
	}
	printf("\n");
	free(dest);
	return (0);
}
*/
