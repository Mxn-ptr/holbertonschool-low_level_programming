#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char **aloc_grid(int width, int height);
char free_grid(int **grid, char height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif