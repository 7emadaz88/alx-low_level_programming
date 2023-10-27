#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char);
int _islower(int);
int _isalpha(int);
int _abs(int);
int _isupper(int);
int _isdigit(int);
int _strlen(char *);
void _puts(char *);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);

#endif
