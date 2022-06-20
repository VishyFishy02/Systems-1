/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

float profit(Node *head){
  float profit = (totalRev(head) - wholesaleCost(head)) + currentInvestment(head);

  return profit;
}

void printCurrentProfit(Node *head){
  printf("\nTotal profit: %.02f", profit(head));
}
