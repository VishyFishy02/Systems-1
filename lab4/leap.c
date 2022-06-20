/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

/* boolean logic to see if year is leap year or not */
int leap (int year){
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
