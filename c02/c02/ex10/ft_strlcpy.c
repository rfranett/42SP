/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:21:10 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/10 19:54:18 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
 int main(int argc, char const *argv[])
{
 	char src[] = "osrobozinhos";
	char dest[] = "";
printf("%d", ft_strlcpy(dest, src, 8));
	return 0;
 }

		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	if (!src)
		return (0);
	counter = ft_strle#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}

int	main(void)
{
	char	src[];
	char	dest[];
	char	result[1];

	src[] = "Victor";
	dest[] = "";
	printf("%s", ft_strcpy(dest, src));
	return (0);
}
n(src);
	if (!size)
		return (counter);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char src[] = "osrobozinhos";
	char dest[] = "";
	printf("%d", ft_strlcpy(dest, src, 8));
	return 0;
}
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = src[count];
	return (dest);
}

int	main(void)
{
	char	src[];
	char	dest[];
	char	result[1];

	src[] = "Victor";
	dest[] = "";
	printf("%s", ft_strcpy(dest, src));
	return (0);
}
