/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:32:32 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 14:13:09 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}/*
int	main()
{
	char	destination[20];
	char	source[] = "krzysztof";

	ft_strcpy(destination, source);
	printf("source:\t%s\n", source);
	printf("destination:\t%s\n", destination);
	return 0;
}*/
