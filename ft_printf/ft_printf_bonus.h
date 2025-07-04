/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@1337.student.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 06:06:10 by iel-alam            #+#    #+#             */
/*   Updated: 2024/12/04 16:31:39 by iel-alam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putstr(const char *s);
int	ft_printhex(unsigned long adress, const char *base, char flag);
int	ft_printnb(int nb, char flag);
int	ft_putchar(char c);
int	ft_printunsnb(unsigned int i);
int	handle_string(const char *str);
int	handle_pointer(unsigned long address);

#endif
