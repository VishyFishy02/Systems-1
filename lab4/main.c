/*
  BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
  TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int main(int argc, char *argv[]){
  /* initialize arguments and head of LL */
  const char* date = argv[1];
  const char* fName1 = argv[2];
  const char* fName2 = argv[3];
  FILE *inputFile, *outputFile;
  int months[12];
  Node *listHead = NULL;

  /* intialize day month year */
  int month, day, year, today;

  /* initialize leap year day */
  int extraDay;

  /* grab month day and year from date string */
  sscanf(date, "%d/%d/%d", &month, &day, &year);

  /* initalize months array to calculate day of year */
  extraDay = leap(year);
  /* originally had all of these declarations in one statment but compiler did not like it :( */
  months[0] = 31;
  months[1] = 59 + extraDay;
  months[2] = 90 + extraDay;
  months[3] = 120 + extraDay;
  months[4] = 151 + extraDay;
  months[5] = 181 + extraDay;
  months[6] = 212 + extraDay;
  months[7] = 243 + extraDay;
  months[8] = 273 + extraDay;
  months[9] = 304 + extraDay;
  months[10] = 334 + extraDay;
  months[11] = 365 + extraDay;

  /* calculate day of they year */
  today = getDay(month, day, months);

  /* open inputFile */
  listHead = readFile(fName1, inputFile, today, year, listHead);

  freeItems(listHead);

  return 0;
}
