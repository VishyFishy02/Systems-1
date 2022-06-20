/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

Node *promptFunctions(Node *head){
  /* declare array of function pointers for the different functions to perform on list */
  void (*computeFunctions[9])(Node *) = {printTotalRev, printTotalWholesaleCost, printCurrentInvestment, printCurrentProfit, printItemsSold, printAverageProfit, printInStock, printOutOfStock, printInDepartment};

  void(*modifyListFunctions[2])(Node **) = {addItem, removeItem};

  /* get function choice from user */
  int choice = getFuncChoice();
  while(choice != 12){
    if(choice > 9){
      modifyListFunctions[choice - 10](&head);
    } else {
      computeFunctions[choice - 1](head);
    }
    choice = getFuncChoice();
  }
  return head;
}
