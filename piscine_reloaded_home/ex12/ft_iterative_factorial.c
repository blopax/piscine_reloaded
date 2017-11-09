/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:42:44 by pclement          #+#    #+#             */
/*   Updated: 2017/11/06 16:55:35 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	if (nb > 12 || nb < 0)
		return (0);
	else
	{
		i = 1;
		fact = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
}
