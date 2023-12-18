/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotomas- <jotomas-@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:26:33 by jotomas-          #+#    #+#             */
/*   Updated: 2023/12/18 13:26:47 by jotomas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int num)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(num);
	count  += ft_print_string(str);
	free(str);
	return (count);
}
