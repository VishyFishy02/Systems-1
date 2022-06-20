/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void printInStock(Node *head){
  int stock;
  Node *current = head;
  struct Data item;
  printf("\nGrocery items in Stock:\n");
  printf("Stock#\tQuantity\tDepartment\tItem\n");
  while(current != NULL){
      item = current->grocery_item;
      stock = item.pricing.wholesaleQuantity - item.pricing.retailQuantity;
      if(stock > 0){
        printf("%d\t%d\t%s\t%s\n", item.stockNumber, stock, item.department, item.item);
      }
    current = current->next;
  }
}
