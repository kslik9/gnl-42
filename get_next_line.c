/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:00:51 by kslik             #+#    #+#             */
/*   Updated: 2022/11/16 13:14:53 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*get_next_line(int fd)
{
	char		*lghraf;
	char		*nog3a;
	static char	chyata[BUFFER_SIZE + 1];
	int			r;

	if (fd < 0 || fd == 1 || fd == 2 || fd >= OPEN_MAX || BUFFER_SIZE < 0)
		return (NULL);
	r = 1;
	nog3a = malloc(1);
	nog3a[0] = '\0';
	if (*chyata)
		nog3a = jm3lya(copy(chyata), nog3a);
	while (r > 0 && !wach_kayn_nl(nog3a))
	{
		lghraf = malloc(BUFFER_SIZE + 1);
		r = read(fd, lghraf, BUFFER_SIZE);
		lghraf[r] = '\0';
		nog3a = jm3lya(nog3a, lghraf);
	}
	nog3a = qtaelya(nog3a, chyata);
	nog3a = shoflya_wash_salina(r, nog3a);
	return (nog3a);
}
