/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-d <ralves-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:11:21 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 15:53:50 by ralves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[];
	char	dest[10];

	src[] = "Victor";
	ft_strcpy(dest, src);
	printf("Resultado: %s\n", dest);
	return (0);
}
