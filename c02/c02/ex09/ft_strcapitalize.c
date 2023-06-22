/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:16:09 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 15:43:49 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		count;
	int		jump;
	char	c;

	count = 0;
	jump = 1;
	while (*(str + count) != '\0')
	{
		c = *(str + count);
		if (jump == 1 && c >= 'a' && c <= 'z')
			str[count] -= 32;
		else if (jump == 0 && c >= 'A' && c <= 'Z')
			str[count] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			jump = 1;
		else
			jump = 0;
		count++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
    char    name2[] = "salut, comment tu vas ? 42mots";
    printf("%s", ft_strcapitalize(name2));
}