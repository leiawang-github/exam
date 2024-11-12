/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiwang <leiwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:28:01 by leiwang           #+#    #+#             */
/*   Updated: 2024/07/06 12:23:37 by leiwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac >1)
	{
		ft_putstr(av[ac - 1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}


