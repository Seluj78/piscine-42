/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:28:22 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/15 10:48:32 by jlasne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS 1
# include <string.h>

typedef struct		s_perso
{
	char	*name;
	double	life;
	int		age;
	int		profession;
}					t_perso;
#endif
