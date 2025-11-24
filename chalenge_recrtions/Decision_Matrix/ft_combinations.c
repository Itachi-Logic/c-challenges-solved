/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combinations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:23:56 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/24 17:31:32 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	solve_helper(char *str, char *buffer, int start_index, int depth, int k)
{
	if (depth == k)
	{
		buffer[depth] = '\0';
		printf("%s\n", buffer);
		return ;
	}
	while (str[start_index] != '\0')
	{
		buffer[depth] = str[start_index];
		solve_helper(str, buffer, start_index + 1, depth + 1, k);
		start_index++;
	}
}

void	ft_print_combinations(char *str, int k)
{
	char	*buffer;

	buffer = malloc((k + 1) * sizeof(char));
	if (buffer == NULL)
		return ;
	solve_helper(str, buffer, 0, 0, k);
	free(buffer);
	return ;
}

int	main(void)
{
	ft_print_combinations("abca", 2);
	return (0);
}
