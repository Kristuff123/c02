/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kristof@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:09:30 by kristof           #+#    #+#             */
/*   Updated: 2024/01/27 21:13:56 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	char	c;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}

int main(void)
{
	char testString[] = "dzien dobry krzysztofie jak sie masz";
	
	printf("this is a test string: %s\n", testString);
	ft_strcapitalize(testString);
	printf("this string has been modded: %s\n", testString);
	return (0);
}
