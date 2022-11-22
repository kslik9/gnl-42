/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:19:41 by kslik             #+#    #+#             */
/*   Updated: 2022/11/16 13:13:12 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <limits.h>

char	*copy(char *chyata)
{
	int		i;
	int		k;
	char	*achraf;

	i = tol(chyata);
	k = 0;
	achraf = malloc(i + 1);
	while (chyata[k] != '\0')
	{
		achraf[k] = chyata[k];
		k++;
	}
	achraf[k] = '\0';
	return (achraf);
}

char	*shoflya_wash_salina(int r, char *nog3a)
{
	if (r <= 0 && !*nog3a)
	{
		free(nog3a);
		return (0);
	}
	return (nog3a);
}

char	*calloci(size_t i)
{
	char	*p;
	size_t	k;

	k = 0;
	p = malloc(i);
	while (k < i)
	{
		p[k] = '\0';
		k++;
	}
	return (p);
}

char	*get_next_line(int fd)
{
	char		*lghraf;
	char		*nog3a;
	static char	chyata[OPEN_MAX][BUFFER_SIZE + 1];
	int			r;

	if (fd < 0 || fd == 1 || fd == 2 || fd >= OPEN_MAX || BUFFER_SIZE < 0)
		return (NULL);
	nog3a = calloci(1);
	if (*chyata[fd])
		nog3a = jm3lya(copy(chyata[fd]), nog3a);
	while (!wach_kayn_nl(nog3a))
	{
		lghraf = calloci(BUFFER_SIZE + 1);
		r = read(fd, lghraf, BUFFER_SIZE);
		if (r <= 0)
		{
			free(lghraf);
			break ;
		}
		nog3a = jm3lya(nog3a, lghraf);
	}
	nog3a = qtaelya(nog3a, chyata[fd]);
	nog3a = shoflya_wash_salina(r, nog3a);
	return (nog3a);
}
