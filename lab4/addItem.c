/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void addItem(Node **headPtr){
  Node *newNode;
  struct Data newItem = getItem();

  newNode = malloc(sizeof(Node));

  newNode->grocery_item = newItem;
  newNode->next = NULL;
  *headPtr = insert(*headPtr, newNode);

}
struct Data getItem(){

  struct Data itemData;
  char *name, *department;
  int *stockNumber, *rquantity, *wquantity;
  float *rprice, *wprice;

  /* allocate space for new item attributes */
  name = malloc(50 * sizeof(char));
  department = malloc(30 * sizeof(char));
  stockNumber = malloc(10 * sizeof(int));
  rprice = malloc(20 * sizeof(float));
  wprice = malloc(20 * sizeof(float));
  rquantity = malloc(10 * sizeof(int));
  wquantity = malloc(10 * sizeof(int));

  /* get attributes and construct new itemData */
  printf("Enter grocery item name: ");
  scanf(" %[^\n]", name);
  printf("Enter Department: ");
  scanf(" %[^\n]", department);
  printf("Enter item stock number: ");
  scanf("%d", stockNumber);
  printf("Enter item retail price: ");
  scanf("%f", rprice);
  printf("Enter item Wholesale price: ");
  scanf("%f", wprice);
  printf("Enter item retail quantity: ");
  scanf("%d", rquantity);
  printf("Enter item Wholesale quantity: ");
  scanf("%d", wquantity);

  strcpy(itemData.item, name);
  strcpy(itemData.department, department);
  itemData.stockNumber = *stockNumber;
  itemData.pricing.retailPrice = *rprice;
  itemData.pricing.wholesalePrice = *wprice;
  itemData.pricing.retailQuantity = *rquantity;
  itemData.pricing.wholesaleQuantity = *wquantity;

  /* free prompt vars and return item Data */
  free(name);
  free(department);
  free(stockNumber);
  free(rprice);
  free(wprice);
  free(rquantity);
  free(wquantity);

  return itemData;
}
