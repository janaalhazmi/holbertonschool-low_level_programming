#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    add_node(&head, "Hello");
    add_node_end(&head, "World");
    add_node_end(&head, "!!!");

    print_list(head);

    printf("Length: %lu\n", list_len(head));

    free_list(head);

    return (0);
}
