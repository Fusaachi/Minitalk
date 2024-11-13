/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:47:38 by pgiroux           #+#    #+#             */
/*   Updated: 2024/10/21 14:03:05 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}t_list;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int c);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(int));
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstiter(t_list *lst, void (*f)(int));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int));
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);

void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *ptrstr1, const void *ptrstr2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t count);

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_free(char **strs);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);

int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_check(char *buffer);
char	*ft_clearbuffer(char *buffer, int i);
char	*ft_strjoin_gnl(char *str, char *buffer);
char	*get_next_line(int fd);

size_t	ft_countnb_long(long long n);
int		ft_printf(const char *format, ...);
int		ft_printpointer(void *adresse);
int		ft_printunsigned(unsigned int integer);
int		ft_putchar(char c);
int		ft_putnbr(int integer);
int		ft_putnbrbase(unsigned int integer, char *base);
int		ft_putstr(char *str);
int		ft_putparams(const char *format, int *i, int count, va_list ap);

#endif
