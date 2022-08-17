/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeever <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:35:50 by akeever           #+#    #+#             */
/*   Updated: 2022/08/17 15:10:02 by akeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 'A' && str[i] < 'Z'))
			return (0);
		if (!(str[i] > 'a' && str[i] < 'z'))
			return (0);
		i++;
	}
	return (1);
}