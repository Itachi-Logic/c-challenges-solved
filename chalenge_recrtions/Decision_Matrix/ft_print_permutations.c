/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_permutations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Itachi-Logic <ILogic@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:05:44 by Itachi-Logic      #+#    #+#             */
/*   Updated: 2025/11/24 18:54:35 by Itachi-Logic     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	leanth(char *str, int len)
{
	while (str[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	is_valid(int *str,int i)
{
	if (str[i] == 0)
		return (1);
	return 0;
}
void	ft_solve_helper(char *str, char *buffer, int *used, int depth, int len)
{
	int	i;

	if (depth == len)
	{
		buffer[depth] = '\0';
		ft_putstr(buffer);
		return ;
	}
	i = 0;
	while (str[i])
	{
		if (is_valid(used, i))
		{
			buffer[depth] = str[i];
			used[i] = 1;
			ft_solve_helper(str, buffer, used, depth + 1, len);
			used[i] = 0;
		}
		i++;
	}
	return ;
}

void	ft_print_permutations(char *str)
{
	int	len;
	int	i;
	int	*used;
	char	*buffer;

	len = leanth(str, 0);
	used = malloc(len * sizeof(int));
	buffer = malloc((len + 1) * sizeof(char));
	if (used == NULL || buffer == NULL)
		return ;
	i = 0;
	while (i < len)
	{
		used[i] = 0;
		i++;
	}
	ft_solve_helper(str, buffer, used, 0, len);
	free(used);
	free(buffer);
		return ;
}

int	main(void)
{
	ft_print_permutations("abc");
	return (0);
}
