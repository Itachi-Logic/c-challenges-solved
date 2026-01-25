/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:55:30 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/12/09 21:49:15 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sum_array(int *arr, int size)
{
	int	result;
	if (size == 0)
		return (0);
	result = ft_sum_array(arr , size - 1) + arr[size - 1];
	return (result);
}

int	main(int argc, char *argv[])
{
	int	*arr;
	int	size;
	int	i;
	
	if (argc < 2)
	{
		printf("Usage: ./a.out <num1> <num2> ...\n");
		return (1);
	}
	size = argc - 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (1);
	i = 0;
	while (i < size)
	{
		arr[i] = atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (i == 0)
			printf("Array is: [");
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("]\nSum of array is: %d\n", ft_sum_array(arr, size));
	free(arr);
	return (0);
}
