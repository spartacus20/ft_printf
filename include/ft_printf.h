/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotomas- <jotomas-@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:42:53 by jotomas-          #+#    #+#             */
/*   Updated: 2023/12/18 14:42:56 by jotomas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_print_number(int num);
int	ft_print_unsigned(unsigned int num);
int	ft_print_ptr(unsigned long int ptr);
int	ft_print_hex(unsigned int num, char format);

#endif
