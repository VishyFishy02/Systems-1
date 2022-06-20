/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

float totalRev(Node *head){
  float revenue = 0;
  Node *current = head;
  struct Data item;

  while(current != NULL){
      item = current->grocery_item;
      revenue = revenue + (item.pricing.retailPrice * item.pricing.retailQuantity);
      current = current->next;
  }

  return revenue;
}

void printTotalRev (Node *head){
  printf("\nTotal revenue: $%.02f", totalRev(head));
}
