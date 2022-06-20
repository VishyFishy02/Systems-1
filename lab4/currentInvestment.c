/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

float currentInvestment(Node *head){
  float currentInvestment = 0;
  Node *current = head;
  struct Data item;

  while(current != NULL){
      item = current->grocery_item;
      currentInvestment = currentInvestment + item.pricing.wholesalePrice*(item.pricing.wholesaleQuantity-item.pricing.retailQuantity);
      current = current->next;
  }
  return currentInvestment;
}

void printCurrentInvestment(Node *head){
  printf("\nTotal Wholesale Investment: %.02f", currentInvestment(head));
}
