/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitter.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blackrider <blackrider@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:20:39 by blackrider        #+#    #+#             */
/*   Updated: 2024/06/29 15:51:16 by blackrider       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../../../hdrs/pipex.h"

typedef struct	s_arg
{
	char	*arg;
	int		x;
	int		size;
}				t_arg;

typedef struct	s_splts
{
	char	spcs;
	t_cchar	**qts;
	t_cchar	**splts;
}				t_splqt;

typedef struct	s_crds
{
	int	i;
	int	size;
	int	strsize;
}				t_crds;
///////////////////////////////SETNODE///////////////////////////////
t_llist	*setnodestr(t_cchar *str, t_crds *crds, t_splqt *splt);
t_llist	*setnodedata(t_cchar *str, t_crds *crds, t_splqt *splt);
///////////////////////////////OFFSET///////////////////////////////
int	offset(t_cchar *str, t_crds *crds, t_splqt *splt);
///////////////////////////////T_ARG///////////////////////////////
void	freeargt(void *data);
t_arg	*crtargt(char *str, int x, int size);
///////////////////////////////T_SPLQT///////////////////////////////
t_splqt	*crtsplqtt(t_cchar **qts, t_cchar **splts, t_cchar spcs);
void	*freesplqtt(t_splqt *splqt);
///////////////////////////////T_CRDS///////////////////////////////
t_crds	*crdcrdst(int i, int size, int strsize);
void	*freecrds(t_crds *crds);