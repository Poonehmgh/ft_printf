/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoghadd <pmoghadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:39:25 by pmoghadd          #+#    #+#             */
/*   Updated: 2022/06/23 20:33:30 by pmoghadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		fhex(unsigned long int n, int signal);
int		ft_printf(const char *str, ...);
char	*ft_itoa2(int m);
int		fchar(va_list list);
int		fstr(char *s);
int		fint(int n);
int		funsigned(unsigned int n);

#endif