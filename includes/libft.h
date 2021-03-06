/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwood <gwood@42.us.org>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:54:20 by gwood             #+#    #+#             */
/*   Updated: 2018/08/31 13:57:40 by gwood            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <inttypes.h>

# define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
# define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))

typedef void		(*t_lstdel_fnc)(void *content, size_t content_size);
typedef void		*(*t_init_fnc)(void *data);
typedef void		(*t_free_fnc)(void *data);

typedef uint8_t		t_byte;

typedef enum		e_bool
{
	false,
	true
}					t_bool;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
char				*ft_itoa(int32_t n, int base);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

int					ft_power(int n, int power);
int					ft_iswspace(int c);
char				*ft_strndup(const char *s, size_t n);
int					ft_count_words(const char *s, char c);
char				*ft_strcase(const char *s);
char				*ft_strtoupper(const char *s);
char				*ft_strtolower(const char *s);
void				ft_putbits(t_byte byte);
void				ft_putbits_fd(t_byte byte, int fd);
void				ft_putbytes(const void *const data, size_t n, char delim);
void				ft_putbytes_fd(const void *const data, size_t n, int fd);
void				ft_putbytes_array(const void *const array,
						size_t array_length, size_t elem_size, char *delims);
t_byte				ft_reversebits(t_byte byte);
int					ft_atoi_base(const char *str, int base);
char				*ft_uitoa(uint32_t n, int base);
char				*ft_ultoa(uint64_t n, int base);
char				*ft_strjoinfree(char *s1, char *s2, int f);
void				ft_exit(int status, t_free_fnc free_data, void *data);
void				ft_error(char *s);
void				ft_error_free(char *s, t_free_fnc free_data, void *data);
void				ft_error_unknown(char *s);
void				ft_error_unknown_free(char *s, t_free_fnc free_data,
						void *data);
void				ft_freestrarr(char **arr);
void				*ft_vargs_to_array(void *last_arg, size_t arg_count,
						size_t arg_size);
uint16_t			ft_bswap16(uint16_t n);
uint32_t			ft_bswap32(uint32_t n);
uint64_t			ft_bswap64(uint64_t n);
void				*ft_bswap_array(const void *const array,
						size_t array_length, size_t elem_size);
size_t				ft_sizeof_ndarray(size_t elem_size, size_t ndims,
						size_t *dims);
char				*ft_strjoin_ml(char *s1, const char *s2);
size_t				ft_count_lines(char *str);
size_t				ft_count_chars(char *str, char c);
char    			*ft_rndstr(size_t size);
char				*ft_ultoa(uint64_t n, int base);
void				ft_putbool(t_bool b);

#endif
