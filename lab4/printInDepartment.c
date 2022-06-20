/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void printInDepartment(Node *head){
  char subString[256];
  int stock;
  Node *current = head;
  struct Data item;

  printf("Enter Department Name to print: ");
  scanf(" %s", subString);
  printf("Grocery Item List for %s\n", subString);
  printf("Stock#\tQuantity\tDepartment\tItem\n");

  while(current != NULL){
      item = current->grocery_item;
      stock = item.pricing.wholesaleQuantity - item.pricing.retailQuantity;
      if(strstr(item.department, subString) != NULL){
        printf("%d\t%d\t%s\t%s\n", item.stockNumber, stock, item.department, item.item);
      }
    current = current->next;
  }
}
