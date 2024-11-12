/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiwang <leiwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:17:36 by leiwang           #+#    #+#             */
/*   Updated: 2024/05/16 12:55:52 by leiwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}

int main(void)
{
    int i = 0;
    while (0 <= i && i <= 100)
    {
        if (i % 15 == 0)
        {
            write(1, "fizzbuzz", 8);
        } 
        else if (i % 3 == 0)
        {
            write(1,"fizz", 4);
        }  
        else if(i % 5 ==0)
        {
            write (1, "buzz", 4);
        } 
        else
        {
            ft_write_number(i);
        }
        write(1,"\n", 1);
        i++;
    }
}