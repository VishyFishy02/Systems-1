/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

Node *readItems(FILE *inputFile){
  Node *head = NULL, *newNode;

  /* loop through items and grab them and add them to linked list */
  do {
    newNode = readOneItem(inputFile);
    if(head == NULL){
      head = newNode;
    } else if (newNode != NULL){
      head = insert(head, newNode);
    }
  } while (newNode != NULL);

  return head;
}

