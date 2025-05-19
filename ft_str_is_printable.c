/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:51:31 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/17 09:33:40 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
			i++;
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[]="Qwerty\n";
// 	char str2[]="QWE\tRTY";
// 	char str3[]="	 \n/*-/=+`˜";
// 	char str4[]="qew rty";
// 	char str5[]="qwerHJK";
// 	printf("%i\n", ft_str_is_printable(str1));
// 	printf("%i\n", ft_str_is_printable(str2));
// 	printf("%i\n", ft_str_is_printable(str3));
// 	printf("%i\n", ft_str_is_printable(str4));
// 	printf("%i\n", ft_str_is_printable(str5));
// 	return (0);
// }