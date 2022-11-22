/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:20:25 by kslik             #+#    #+#             */
/*   Updated: 2022/11/16 13:21:23 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "get_next_line_bonus.h"

int	hseb_l_nl(char *nog3a)
{
	int	i;

	i = 0;
	while (nog3a[i] != '\n' && nog3a[i] != '\0')
		i++;
	return (i);
}

int	wach_kayn_nl(char *nog3a)
{
	int	i;

	i = 0;
	while (nog3a[i])
	{
		if (nog3a[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	tol(char *ljomla)
{
	int	i;

	i = 0;
	while (ljomla[i] != '\0')
		i++;
	return (i);
}

char	*jm3lya(char *nog3a, char *lghraf)
{
	int		i;
	int		j;
	int		k;
	int		m;
	char	*jm3a;

	k = tol(nog3a);
	m = tol(lghraf);
	i = 0;
	j = 0;
	jm3a = malloc(m + k + 1);
	while (i < k)
	{
		jm3a[i] = nog3a[i];
		i++;
	}
	while (i < (k + m))
		jm3a[i++] = lghraf[j++];
	jm3a[i] = '\0';
	free(nog3a);
	free(lghraf);
	lghraf = NULL;
	return (jm3a);
}

char	*qtaelya(char *nog3a, char *chyata)
{
	int		i;
	int		j;
	int		k;
	char	*ster;

	k = 0;
	j = 0;
	i = hseb_l_nl(nog3a);
	ster = malloc(i + 2);
	while (j < i)
	{
		ster[j] = nog3a[j];
		j++;
	}
	if (nog3a[j] == '\n')
	{
		ster[j] = '\n';
		j++;
	}
	ster[j] = '\0';
	while (nog3a[j] != '\0')
		chyata[k++] = nog3a[j++];
	chyata[k] = '\0';
	free(nog3a);
	return (ster);
}
