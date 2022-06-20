/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int itemsSold(Node *head){
  int sum = 0;
  Node *current = head;
  struct Data item;

  while(current != NULL){
      item = current->grocery_item;
      sum = sum + item.pricing.retailQuantity;
      current = current->next;
  }
  return sum;
}

void printItemsSold(Node *head){
  printf("\nTotal number of grocery items sold: %d", itemsSold(head));
}
