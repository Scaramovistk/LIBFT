
#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
int 	ft_isalpha(int c);
int 	ft_isascii(int c);
int 	ft_isdigit(int c);
int 	ft_isprint(int c);
int 	ft_isalnum(int c);
size_t	ft_strlen(const char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
size_t      ft_strlcat(char *dest, const char *src, size_t size);
int     ft_strncmp(char *s1, char *s2, unsigned int n);

#endif