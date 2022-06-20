/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
THIS ASSIGNMENT. */

#include <stdio.h>

/*
 * function to get numBooks
 */
int getNumBooks(){

  int numBooks;

  printf("How many library book titles do you plan to enter? ");
  scanf("%d%*c", &numBooks); /*a neat trick to clear the extra \n with scanf*/

  return numBooks;
}
