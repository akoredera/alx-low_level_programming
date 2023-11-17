#ifndef list_H
#define list_H
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
list_t *add_node_end(list_t **head, const char *str);
unsigned int len_str(char * str);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
char *str_result(char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
