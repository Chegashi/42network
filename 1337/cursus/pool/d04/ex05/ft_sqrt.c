/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:50:54 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/21 17:19:36 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0 && nb <= 2147395600)
	{
		while (i <= nb / 2)
		{
			if (i > 46340)
				return (0);
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}