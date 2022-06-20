# comments in a Makefile start with sharp

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c
# target all means all targets currently defined in this file
all: lab6.zip bit_encode

# this target is the .zip file that must be submitted to Carmen
lab6.zip: Makefile bit_encode.c lab6readme rotate_right.s rotate_left.s create_key.s lab6.h
	zip lab6.zip Makefile bit_encode.c lab6readme rotate_right.s rotate_left.s create_key.s lab6.h

# this target is the binary converter executable that prompts for input from the keyboard
bit_encode: bit_encode.o rotate_right.o rotate_left.o create_key.o
	gcc bit_encode.o rotate_right.o rotate_left.o create_key.o -o bit_encode

# this target is the dependency for bit_encode1
# we use "-o bit_encode1.o" here so that the .o file doesn't have the same name as the .c file
bit_encode.o: bit_encode.c lab6.h
	gcc $(gcc_opt) bit_encode.c

rotate_right.o: rotate_right.s
	gcc $(gcc_opt) rotate_right.s

rotate_left.o: rotate_left.s
	gcc $(gcc_opt) rotate_left.s

create_key.o: create_key.s
	gcc $(gcc_opt) create_key.s

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o bit_encode lab6.zip
