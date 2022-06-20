/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
THIS ASSIGNMENT. */

#include <stdio.h>


/* function to print both lists to file and close output stream */
void writeToFile(char **list, char ***favorites, int numFavorites, int numBooks, FILE *fptr, char *filename){

  int i;

  /* print out titles list to file */
  fprintf(fptr, "%s", "Books I've Read:\n");

  for(i = 0; i < numBooks; i++){
    fprintf(fptr, "%s\n", *(list + i));
  }

  /* print out favorites list */
  fprintf(fptr, "\n\n%s", "My Favorites are:\n");

  for(i = 0; i < numFavorites; i++){
    fprintf(fptr, "%s\n", **(favorites + i));
  }

  /* print confrimation message */
  printf("Your books and favorites list have been printed to the file %s. ", filename);
  fclose(fptr);
}
