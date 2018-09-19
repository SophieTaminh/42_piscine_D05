/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:07:06 by staminh           #+#    #+#             */
/*   Updated: 2018/09/19 10:47:11 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i = i + 1;
	}
	str[i] = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if ((str[i - 1] <= ' ' || str[i - 1] == '-' || str[i - 1] == '+')
				&& str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}
