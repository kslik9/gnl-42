/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslik <kslik@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:44:44 by kslik             #+#    #+#             */
/*   Updated: 2022/11/16 13:21:59 by kslik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*get_next_line(int fd);
int		hseb_l_nl(char *nog3a);
int		wach_kayn_nl(char *nog3a);
int		tol(char *ljomla);
char	*jm3lya(char *nog3a, char *lghraf);
char	*qtaelya(char *nog3a, char *chyata);
char	*copy(char *chyata);
#endif