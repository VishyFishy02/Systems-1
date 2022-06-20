/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

Node *readFile(const char* fName1, FILE *inputFile, int today, int year, Node *head){
  int fileday;
  int fileyear;
  int difference;
  char c;
  int numItems;

  /* open inventory file */
  inputFile = fopen(fName1, "r");
  /* get day and year */
  fscanf(inputFile, "%d", &fileday);
  fscanf(inputFile, "%d", &fileyear);
  /* compute and print difference */
  difference = (today - fileday) + ((year - fileyear) * 365);
  printf("There are %d days difference between the date entered and the date in the file. Do you wish to continue? ", difference);
  scanf("%s", &c);
  if(c == 'y' || c == 'y'){
    printf("\n\nReading inventory from file '%s'", fName1);
    head = readItems(inputFile);
    numItems = countItems(head);
    printf("\nA total of %d grocery items were read into inventory from the file '%s'.", numItems, fName1);
    head = promptFunctions(head);
  }
  fclose(inputFile);

  return head;
}
