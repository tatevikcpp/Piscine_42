/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:46:52 by tkhechoy          #+#    #+#             */
/*   Updated: 2022/02/22 14:33:41 by tkhechoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			j++;
		}
		else if (j > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			j = 0;
		}
		else
			j++;
		i++;
	}
	return (str);
}
