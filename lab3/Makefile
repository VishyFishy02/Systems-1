# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
# TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
# RESPECT TO THIS ASSIGNMENT.


# comments in a Makefile start with sharp

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c

# target all means all targets currently defined in this file
all: lab3.zip lab3

# this target is the .zip file that must be submitted to Carmen
lab3.zip: Makefile booklist.c lab3.h lab3readme freeMemory.c getFavorites.c getNumBooks.c printFavorites.c printTitles.c writeToFile.c
	zip lab3.zip Makefile booklist.c lab3.h lab3readme freeMemory.c getFavorites.c getNumBooks.c printFavorites.c printTitles.c writeToFile.c

# this target is for the lab3 executable
# the lab3 target gets recreated if booklist.o has changedm
lab3: booklist.o freeMemory.o getFavorites.o getNumBooks.o printFavorites.o printTitles.o writeToFile.o

#this is the linux command we want make to execute
#if lab1.o has changed, note that we only use the -o option here
	gcc booklist.o freeMemory.o getFavorites.o getNumBooks.o printFavorites.o printTitles.o writeToFile.o -o lab3

#if Makefile booklist.c or lab3README has changed
	zip lab3.zip Makefile booklist.c lab3.h lab3readme freeMemory.c getFavorites.c getNumBooks.c printFavorites.c printTitles.c writeToFile.c

# this target is the dependency for booklist.o
# the booklist.o target gets recreated if booklist.c has changed
booklist.o: booklist.c lab3.h

# this is the linux command we want make to execute
# if booklist.c has changed, note that this is where most of the
# gcc options are and there is now a -c option used
# -c option means that we stop compiling after we create a .o
# file. We don't compile all the way to the end creating an
# executable.
	gcc $(gcc_opt) booklist.c

# this target is the dependency for freeMemory.o
# the freeMemory.o target gets recreated if freeMemory.c has changed
freeMemory.o: freeMemory.c
	gcc $(gcc_opt) freeMemory.c

# this target is the dependency for getFavorites.o
# the getFavorites.o target gets recreated if getFavorites.c has changed
getFavorites.o: getFavorites.c
	gcc $(gcc_opt) getFavorites.c

# this target is the dependency for getNumBooks.o
# the getNumBooks.o target gets recreated if getNumBooks.c has changed
getNumBooks.o: getNumBooks.c
	gcc $(gcc_opt) getNumBooks.c

# this target is the dependency for printFavorites.o
# the printFavorites.o target gets recreated if printFavorites.c has changed
printFavorites.o: printFavorites.c
	gcc $(gcc_opt) printFavorites.c

# this target is the dependency for printTitles.o
# the printTitles.o target gets recreated if printTitles.c has changed
printTitles.o: printTitles.c
	gcc $(gcc_opt) printTitles.c

# this target is the dependency for writeToFile.o
# the writeToFile.o target gets recreated if writeToFile.c has changed
writeToFile.o: writeToFile.c
	gcc $(gcc_opt) writeToFile.c

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o lab3 lab3.zip
