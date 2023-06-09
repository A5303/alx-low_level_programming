#ifndef MAIN_H
#define MAIN_H

char *_memset(char *g, char h, unsigned int y);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int_strspn(char *p, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*g)[8]);
void print_diagsums(int *q, int size);
void set_string(char **r, char *to);

#endif
