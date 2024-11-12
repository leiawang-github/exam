/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiwang <leiwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:17:32 by leiwang           #+#    #+#             */
/*   Updated: 2024/07/07 13:52:36 by leiwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i],1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac>=2)
	{
		ft_putchar(av[1]);	
	}
	else
		write(1,"/n",1);
}
 

