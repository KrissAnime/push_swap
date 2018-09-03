/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:36:16 by cbester           #+#    #+#             */
/*   Updated: 2018/08/31 11:14:53 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 1
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef unsigned char	t_byte;

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

enum	e_gnl
{
	ERROR = -1,
	DONE = 0,
	READ = 1,
};

/*
** 3-D array manipulation
*/

void					free_big_array(char ***array);

/*
** void return functions
*/

void					free_array(char **array, size_t x);
void					free_array2(char **array, size_t x);
void					ft_bzero(void *s, size_t n);
void					*ft_memalloc(size_t size);
void					*ft_memchr(const void *s, int c, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, const void *src, int c,
		size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memset(void *b, int c, size_t len);
void					ft_strclr(char *s);
void					ft_strdel(char **as);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
**	Functions that print out the desired input
*/

void					print_array(char **array, char c, int fd);
void					ft_putendl(char const *s);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putstr(const char *s);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putnbr(int n);
void					ft_putnbr_fd(int n, int fd);

/*
** List manipulation functions
*/

void					ft_lstdelone(t_list **alst, void (*del)(void *,
			size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *ne);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));

/*
** Single dimensional array functions
*/

char					*ft_strjoinfree(char *s1, char const *s2);

char					*ft_joinfree(char *s1, char *s2);
char					*ft_itoa(int n);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
			char));
char					*ft_strncat(char *s1, const char *s2, size_t n);
char					*ft_strnew(size_t size);
char					*ft_strdup(const char *s1);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strsub(char const *s, unsigned int start,
		size_t len);
char					*ft_strtrim(char const *s);
char					*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
/*
** GNL Functions
*/

int						get_next_line(const int fd, char **line);
int						get_next_line_var(const int fd, char **line,
		size_t buffer);

/*
** 2-Dimensional array functions
*/

char					**array_dup(char **s);
char					**new_array(char *first);
char					**new_array_free(char *first);
char					**ft_strsplit(char const *s, char c);
char					**ft_array_shrink(char **cur);

/*
** Int return functions
*/

int						ft_abs(int num);
int						ft_atoi(const char *str);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
int						ft_tolower(int c);
int						ft_toupper(int c);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strequ(char const *s1, char const *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
int						ft_dubcheck(int *tab, size_t s, int num);

/*
** size_t return functions
*/

size_t					ft_array_size(char **array);
size_t					ft_findchar(char *s, char c);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t					ft_strlen(const char *s);
size_t					ft_numlen(int num);
size_t					wdmatch(const char *demons, char *heroes);

/*
** List return functions
*/

t_list					*ft_lstnew(void const *content, size_t content_size);
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
#endif
