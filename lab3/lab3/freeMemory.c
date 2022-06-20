/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
THIS ASSIGNMENT. */

#include <stdio.h>
#include <stdlib.h>

/* function to free all dynamically acsessed memory */
void freeMemory(char **titles, char ***favorites, int numBooks, int numFavorites){
  int i;
  /* loop through titles and clear all the strings */
  for(i = 0; i< numBooks; i++){
    if(*(titles+i) != NULL){
      free(*(titles+i));
    }
  }
  /* now free the pointers */
  free(titles);
  free(favorites);

}
