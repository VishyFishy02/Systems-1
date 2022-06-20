#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void freeItems(Node *head) {
    Node *current, *next;
    current = head;
    /* loop through the list and free all the nodes */
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
