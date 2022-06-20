/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int getFuncChoice(){
  int choice;
  /* list choices for user */
  printf("\nPlease Enter an integer between 1 and 12:\n");
  printf("1) Print Total Revenue\n");
  printf("2) Print Total Wholesale Cost\n");
  printf("3) Print Current Grocery Item Investment\n");
  printf("4) Print Current Profit\n");
  printf("5) Print Total Number of Grocery Items Sold\n");
  printf("6) Print Average Profit per Gorcery Item\n");
  printf("7) Print Grocery Items In Stock\n");
  printf("8) Print Out of Stock Grocery Items\n");
  printf("9) Print Grocery Items for a Department\n");
  printf("10) Add Grocery Item to Inventory\n");
  printf("11) Delete Grocery Item from Inventory\n");
  printf("12) Exit Program\n\n");
  /* get choice and return it */
  printf("Option: ");
  scanf("%d", &choice);
  return choice;
}
