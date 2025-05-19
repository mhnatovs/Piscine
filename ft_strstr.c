/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhnatovs <mhnatovs@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:43:55 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/17 12:45:19 by mhnatovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[j])
	{
		if (str[j] == to_find[i])
			i++;
		else
			i = 0;
		j++;
		if (to_find[i] == '\0')
			return (&str[j - i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[] = "There is a way.";
// 	char str2[] = "";
// 	printf("%s\n", ft_strstr(str1, str2));
// 	// printf("%s", strstr(str1, str2));
// 	return (0);
// }