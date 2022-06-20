/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
THIS ASSIGNMENT. */

#include <stdio.h>

/*
 * function to print strings from a pointer to an array containing pointers to strings
 */
void printTitles(char **list, int numBooks){
  int i = 0;

  printf("You've entered:\n");
  while(i < numBooks){
    printf("%d. %s\n", (i+1), *(list + i));
    i++;
  }
}
