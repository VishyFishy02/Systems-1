/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

float wholesaleCost(Node *head){
  float wcost = 0;
  Node *current = head;
  struct Data item;

  while(current != NULL){
      item = current->grocery_item;
      wcost = wcost + (item.pricing.wholesalePrice * item.pricing.wholesaleQuantity);
      current = current->next;
  }

  return wcost;
}

void printTotalWholesaleCost(Node *head){
  printf("\nTotal Wholesale cost: %.02f", wholesaleCost(head));
}
