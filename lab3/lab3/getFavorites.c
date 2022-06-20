/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
THIS ASSIGNMENT. */

#include <stdio.h>

/*
 function to get numFavorites and populate a favorites list with doubles pointers to the favorite titles
 */
int getFavorites(char **list, int numBooks){

  int numFavorites;

  printf("Of these %d books, how many do you plan to put on your favorites list? ", numBooks);
  scanf("%d%*c", &numFavorites);

  return numFavorites;
}
