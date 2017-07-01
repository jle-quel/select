/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 09:25:21 by jle-quel          #+#    #+#             */
/*   Updated: 2017/03/20 16:02:18 by jle-quel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		index;

	if (s)
	{
		index = 0;
		while (s[index] != '\0')
		{
			ft_putchar(s[index]);
			index++;
		}
	}
}
