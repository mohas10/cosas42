/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagna <msagna@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:46:55 by msagna            #+#    #+#             */
/*   Updated: 2023/03/30 16:40:05 by msagna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT.H
#define LIBFT.H

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_atoi(const char *str);
void	ft_bzero (void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isascii(int);
int	ft_isdigit(int);
int	ft_isprint(int);
int	ft_strlen(char);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s,int c);
char	*ft_strdup(const char *s1);
char	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlen(const char s[]);
size_t	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
