/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:28:46 by kslik             #+#    #+#             */
/*   Updated: 2022/11/16 13:21:56 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
int		hseb_l_nl(char *nog3a);
int		wach_kayn_nl(char *nog3a);
int		tol(char *ljomla);
char	*jm3lya(char *nog3a, char *lghraf);
char	*qtaelya(char *nog3a, char *chyata);
char	*copy(char *chyata);
#endif