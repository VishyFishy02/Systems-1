/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void printItems(Node *head, FILE *output){
  Node *current = head;

  while(current != NULL){
    fprintf(output, "%s\n", current->grocery_item.item);
  }
}
