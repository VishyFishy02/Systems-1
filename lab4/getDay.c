/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

/* returns day of year calcaulted from month and day */
int getDay(int month, int day, int months[]){
  int dayOfYear;
  int numDaysBefore;

  if (month != 1) {
    numDaysBefore = months[month - 2];
  } else { /* special case because 0 days come before january */
    numDaysBefore = 0;
  }
  dayOfYear = numDaysBefore + day;
  return dayOfYear;
}
