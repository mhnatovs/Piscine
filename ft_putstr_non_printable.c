/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 10:13:01 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/17 10:53:56 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_c(char *c)
{
	char	*str;
	char	a;
	char	b;

	str = "0123456789abcdef";
	a = str[(int)*c >> 4];
	b = str[(int)*c & 0x0F];
	write(1, "\\", 1);
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			convert_c(&str[i]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str[] = "Hello\nHow are you?";
// 	ft_putstr_non_printable(str);
// }