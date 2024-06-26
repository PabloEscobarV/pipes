/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_splts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:05:30 by polenyc           #+#    #+#             */
/*   Updated: 2024/06/26 15:56:55 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hdrs/pipex.h"
#include <stdlib.h>

void	*freespltst(t_splts *splts)
{
	ft_free_d((void **)splts->spltqts);
	ft_free_d((void **)splts->splts);
	free(splts);
	splts = NULL;
	return (splts);
}

t_splts	*crtspltst()
{
	t_splts	*splts;

	splts = malloc(sizeof(t_splts));
	if (!splts)
		return (NULL);
	splts->spltqts = ft_split(SPLTQTS, SPLTCH);
	splts->splts = ft_split(SPLTS, SPLTCH);
	if (!splts->spltqts || !splts->splts)
		return (freespltst(splts));
	return (splts);
}