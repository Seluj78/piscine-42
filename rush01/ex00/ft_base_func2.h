/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_func2.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 15:54:49 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/17 22:28:54 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BASE_FUNC2_H
# define FT_BASE_FUNC2_H
# include <unistd.h>
# include <stdlib.h>

t_bool	ft_is_args_valide(char **grille);

int		check_args(char **grille);

t_bool	check(int ac, char **av);

#endif
