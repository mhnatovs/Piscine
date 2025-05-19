/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:19:51 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/14 18:15:14 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 1;
	while ((*s1 || *s2) && i <= n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "qwerty";
//     char str2[] = "1";

//     int result = ft_strncmp(str1, str2, 3);

//     if (result == 0) {
//         printf("1 = 2\n");
//     } else if (result < 0) {
//         printf("1 < 2\n");
//     } else {
//         printf("1 > 2\n");
//     }
// }