/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etattevi <etattevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:38:51 by etattevi          #+#    #+#             */
/*   Updated: 2022/11/14 13:40:25 by etattevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	write_arg(int *printed, va_list args, char specifier);
void	puthex(int *printed, unsigned long n, bool upper, bool is_long);
void	puthexnbr(int *printed, unsigned long n, bool upper);
void	putstr(int *printed, char *str);
void	putchr(int *printed, char chr);
void	putnb(int *printed, long nb);

#endif