/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsekim <minsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:24:50 by minsekim          #+#    #+#             */
/*   Updated: 2020/12/24 20:00:55 by minsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef	struct		s_list {
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *src);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
int					ft_isalnum(int value);
int					ft_isalpha(int value);
int					ft_isascii(int value);
int					ft_isdigit(int value);
int					ft_isprint(int value);
char				*ft_itoa(int n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *ptr, int value, size_t size);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void				*ft_memcpy(void *dest, const void *src, size_t num);
void				*ft_memmove(void *dest, const void *src, size_t size);
void				*ft_memset(void *ptr, int c, size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_strequ(char *s1, char *s2);
char				*ft_strchr(const char *str, int value);
char				*ft_strdup(const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *str1, const char *str2, size_t size);
char				*ft_strnstr(const char *src, const char *str, size_t len);
char				*ft_strrchr(const char *str, int value);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int value);
int					ft_toupper(int value);
char				**ft_split(char const *src, char c);
void				ft_putchar(wchar_t c);
void				ft_putstr(char *str);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
#endif
