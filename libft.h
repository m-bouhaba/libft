#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

 void   *ft_memset(void *b, int c, size_t len);
 size_t ft_strlen(const char *s);
 int    ft_isprint(int c);
 int    ft_isdigit(int c);
 int    ft_isascii(int c);
 int    ft_isalpha(int c);
 int    ft_isalnum(int c);
 void   ft_bzero(void *s, size_t n);
 int    ft_tolower(int c);
 int    ft_toupper(int c);
 char   *ft_strchr(const char *s, int c);
 char   *ft_strrchr(const char *s, int c);
 int    ft_atoi(const char *str);
 void   *memchr(const void *s, int c, size_t n);

 #endif