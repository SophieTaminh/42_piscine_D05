/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staminh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:40:41 by staminh           #+#    #+#             */
/*   Updated: 2018/09/18 14:40:59 by staminh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		result;
	int		i;
	char	signe;

	result = 0;
	i = 0;
	signe = 'p';
	while (str[i] < ' ')
		i = i + 1;
	if (str[i] == '-')
		signe = 'n';
	if (str[i] == '-' || str[i] == '+')
		i = i + 1;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i = i + 1;
	}
	if (signe == 'n')
		return (-result);
	return (result);
}
