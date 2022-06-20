/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

Node *readOneItem(FILE *inputFile) {
  Node *itemNode;
  struct Data itemData;
  itemData = setData(inputFile);
  if (itemData.stockNumber == -1) { /* reached EOF, return NULL pointer for the end of list */
       return NULL;
  }
  itemNode = malloc(sizeof(Node)); /* Allocate space for new node */
  itemNode->grocery_item = itemData;
  itemNode->next = NULL;

  return itemNode;
}
