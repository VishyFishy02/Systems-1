/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
   TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
   THIS ASSIGNMENT.
*/

int getNumBooks();

void getTitles(char **list, int numBooks);

void printTitles(char **list, int numBooks);

int getFavorites(char **list, int numBooks);

void setFavorites(char **list, char *** favorites, int numFavorites);

void printFavorites(char ***favorites, int numFavorites);

void writeToFile(char **list, char ***favorites, int numFavorites, int numBooks, FILE *fptr, char *filename);

void askFile(char **list, char ***favorites, int numFavorites, int numBooks);

void freeMemory(char **titles, char ***favorites, int numBooks, int numFavorites);
