/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

float averageProfit(Node *head){
  float averageProfit = profit(head) / itemsSold(head);
  return averageProfit;
}

void printAverageProfit(Node *head){
  printf("\nAverage Profit: %.02f", averageProfit(head));
}
