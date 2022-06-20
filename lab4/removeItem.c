/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void removeItem(Node **headPtr) {
  int stockNum;
  printf("Please enter the grocery item stock number you wish to delete, followed by enter. ");
  scanf(" %d", &stockNum);
  *headPtr = deleteItem(*headPtr, stockNum);
}

Node *deleteItem(Node *head, int stockNum){
  Node *current = head, *prev = NULL;
  while(current != NULL && current->grocery_item.stockNumber != stockNum){
    prev = current;
    current = current->next;
  }

  if(current != NULL){
    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }
    free(current);
    printf("Grocery item stock number %d was deleted.\n", stockNum);
  } else {
    printf("ERROR: Grocery item stock number %d was not found in the list.\n", stockNum);
  }

  return head;
}
