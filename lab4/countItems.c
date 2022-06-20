/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int countItems(Node *head) {
    Node *current;
    int count = 0;

    current = head;
    while (current != NULL) {
        current = current->next;
        count++;
    }
    return count;
}
