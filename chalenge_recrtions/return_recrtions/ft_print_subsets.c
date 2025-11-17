/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_subsets.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:28:46 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/11 21:11:47 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	solve_helper(char *str, char *buffer, int i_str, int i_buffer)
{
	if (str[i_str] == '\0')
	{
		buffer[i_buffer] = '\0';
		printf("%s\n", buffer);
		return ;
	}
	solve_helper(str, buffer, i_str + 1, i_buffer);
	buffer[i_buffer] = str[i_str];
	solve_helper(str, buffer, i_str + 1, i_buffer + 1);
	buffer[i_buffer] = '\0';
	return ;
}

void	ft_print_subsets(char *str)
{
	int	len;
	char	*buffer;

	len = strlen(str);
	buffer = malloc((len + 1) * sizeof(char));
	if (buffer == NULL)
		return ;
	solve_helper(str, buffer, 0, 0);
	free(buffer);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_print_subsets(argv[1]);
	return (0);
}
