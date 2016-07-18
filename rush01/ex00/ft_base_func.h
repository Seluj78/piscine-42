/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_func.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 17:57:40 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/17 19:01:10 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BASE_FUNC_H
# define FT_BASE_FUNC_H
# include <stdlib.h>
# include <unistd.h>
# define TRUE 1
# define FALSE 0

typedef int		t_bool;

void	ft_putchar(char c);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putstr_space(char *str);

void	ft_print_sud(char **grille);

t_bool	ft_is_args_valide(char **grille);

#endif
