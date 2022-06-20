/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
THIS ASSIGNMENT. */

#include <stdio.h>

void printFavorites(char ***favorites, int numFavorites){
  int i = 0;
  printf("\nThe books on your favorites list are:\n");

    while(i < numFavorites){
      printf("%s\n", **(favorites + i));
      i++;
    }
}
