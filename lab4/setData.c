/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lab4.h"

struct Data setData(FILE *inputFile){
  /* declare and allocate dynamic vars */
  struct Data itemData;
  char *name, *department;
  int *stockNumber, *rquantity, *wquantity;
  float *rprice, *wprice;

  name = malloc(50 * sizeof(char));
  department = malloc(30 * sizeof(char));
  stockNumber = malloc(10 * sizeof(int));
  rprice = malloc(20 * sizeof(float));
  wprice = malloc(20 * sizeof(float));
  rquantity = malloc(10 * sizeof(int));
  wquantity = malloc(10 * sizeof(int));

  /* read line and set variables only if line is not eof or blank*/
  if((fscanf(inputFile, "%[^\t]\t%[^\t]\t%d\t%f\t%f\t%d\t%d", name, department, stockNumber, rprice, wprice, rquantity, wquantity)) == (EOF || strlen(name) == 0)){
    itemData.stockNumber = -1;

    /* free the dynamic vars and return bad item */;
    free(name);
    free(department);
    free(stockNumber);
    free(rprice);
    free(wprice);
    free(rquantity);
    free(wquantity);

    return itemData;
  } else {
    strcpy(itemData.item, name);
    strcpy(itemData.department, department);
    itemData.stockNumber = *stockNumber;
    itemData.pricing.retailPrice = *rprice;
    itemData.pricing.wholesalePrice = *wprice;
    itemData.pricing.retailQuantity = *rquantity;
    itemData.pricing.wholesaleQuantity = *wquantity;

  /* free the dynamic vars once they have been set */

    free(name);
    free(department);
    free(stockNumber);
    free(rprice);
    free(wprice);
    free(rquantity);
    free(wquantity);

    /* return data struct */
    return itemData;
  }

}
