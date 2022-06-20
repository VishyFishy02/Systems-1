/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT.
 *
 * Name: Vishal Kumar
 */


#include <stdio.h> /* this tells the preprocessor to copy IO library prototypes
and other information from the file /usr/include/stdio.h */
#include <stdlib.h> /* copy this library to use dynamic memory allocaiton functions */
#include "lab3.h"  /* contains function prototypes for all functions used */

/*
 * function to get titles from user and populate a book list with pointers to them
 */
void getTitles(char **list, int numBooks){
  /* variable to iterate through list */
  int i = 0;

  /* dynamically allocate 61 chars for each title */
  for(i = 0; i < numBooks; i++){
    *(list + i) = (char *) calloc(61, sizeof(char));
  }
  i = 0;

  /* grab book titles from the user */
  printf("Enter the %d book titles one to a line: ", numBooks);

  while(i < numBooks){
   scanf(" %[^\n]",*(list + i));
  i++;
  }
}

/*
 * function to populate favorites array with pointers to list pointers
 */
void setFavorites(char **list, char *** favorites, int numFavorites){
  int i;
  int j;
  printf("Enter the number next to each book title you want on your favorites list: ");


  for(i = 0; i < numFavorites; i++){
    scanf("%d",&j);
    *(favorites + i) = (list + (j-1));

  }

}

/*
 * function to prompt for saving and if yes, write to file
 */
void askFile(char **list, char ***favorites, int numFavorites, int numBooks){
  char filename[256];
  FILE *fptr;
  int choice;
  /* get the choice and if they say yes then open file for writing */
  printf("Do you want to save them (1=yes, 2=no) ");
  scanf("%d", &choice);
    if(choice == 1){
      printf("What file name do you want to use? ");
      scanf(" %[^\n]", filename);
      fptr = fopen(filename, "w");

      writeToFile(list, favorites, numFavorites, numBooks, fptr, filename);
    }
}

/*
 * Name: Vishal Kumar
 *
 * This program prompts the user for a list of books and a list of favorite books and uses
 * dynamically allocated memory to store them and print to a file if desired.
 *
 */

int main(void) {

  int numBooks;
  int numFavorites;
  char **titles;
  char ***favorites;

  /* get numbooks and initilaize and populate titles array, then print them out to user */
  numBooks = getNumBooks();
  titles = (char **)calloc(numBooks, sizeof(char *));
  getTitles(titles, numBooks);
  printTitles(titles, numBooks);

  /* get numFavorites and initilaize and populate favorites array, then print them out to user */
  numFavorites = getFavorites(titles, numBooks);
  favorites = (char ***)calloc(numFavorites, sizeof(char **));
  setFavorites(titles, favorites, numFavorites);
  printFavorites(favorites, numFavorites);

  /* print to file (or not) and free up the dynamicly allocated memory */
  askFile(titles, favorites, numFavorites, numBooks);
  freeMemory(titles, favorites, numBooks, numFavorites);

  return 0;

}
