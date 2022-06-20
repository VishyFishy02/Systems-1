/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

Node *insert(Node *head, Node *newNode){
  Node *current;
  Node *previous = NULL;
  current = head;

  /* Iterate until current.stockNum > newNode.stockNum or end of list */
  while((current != NULL) && (current->grocery_item.stockNumber) < (newNode->grocery_item.stockNumber)){
    previous = current;
    current = current->next;
  }
  newNode->next = current;
  if(previous != NULL){
    previous->next = newNode;
  } else {
    head = newNode;
  }
  return head;
}
