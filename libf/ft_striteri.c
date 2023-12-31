/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotomas- <jotomas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:57:41 by jotomas-          #+#    #+#             */
/*   Updated: 2023/11/10 14:11:27 by jotomas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int index, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s != '\0')
		{
			(*f)(i, s++);
			i++;
		}
	}
}
