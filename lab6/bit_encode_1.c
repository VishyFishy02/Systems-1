/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT.
 *
 * Name: Vishal Kumar
 */

#include <stdio.h> /* this tells the preprocessor to copy IO library prototypes
and other information from the file /usr/include/stdio.h */
#include "lab6.h"

/*
 * function to get string input from user, returns length of string
 */
int input(unsigned char str[], int maxChars){
    int ch, i = 0;
    /* iterate through message and store each char in array */
    while((ch = getchar()) != '\n'){
        if (i < maxChars){
            str[i] = ch;
            i++;
        }
    }
    /* last char to show its a string */
    str[i] = '\0';
    return i;
}
/*
 * function to print a string in hex format (10 numbers per line)
 */
void printHex(unsigned char str[], int n){
    /* keep track of numbers per line */
    int digitsOnLine = 0;
    int i;
    /* print out each char in array as a hex value */
    printf("hex encoding:\n\t");

    for(i=0; i < n; i++){
        printf("%02X ", str[i]);
            digitsOnLine++;
            /* start new line after 10 */
            if(digitsOnLine == 10){
                printf("\n\t");
                digitsOnLine = 0;
            }
    }
}

/*
 * Fucntion to perform  cipher on cleartext and print it in hex
 */
void cipher(unsigned char str[], int length, unsigned char key){
    int i;
    unsigned char cipherStr[201] = "";

    /* xor */
    for(i = 0; i < length; i++){
        cipherStr[i] = (str[i] ^ key);
    }

    /* rotation */
    for(i = 0; i < length; i++){
        if((i % 2) == 0){
            cipherStr[i] = rotate_left(cipherStr[i]);
        } else {
            cipherStr[i] = rotate_right(cipherStr[i]);
        }
    }
        printHex(cipherStr, length);
}

/*
 * Name: Vishal Kumar
 * This program takes a string message (max of 200 chars) and performs a cipher on it.
 * I peform this cipher by creating an 8 bit key and using xor and a bit  rotation algorithm
 * on each character within the message.
 */

int main(){
    int charCount;
    unsigned char key = 0;                  /* 0000 0000 */

    /* get and verify string from user */
    unsigned char clearText[201]= "";


    printf("enter cleartext: ");
    charCount = input(clearText, 200);


    printf("%s\n",clearText);
    /* print out string in hex */
    printHex(clearText, charCount);
    printf("\n");

    /* get key and  perform cipher */
    key = create_key();
    cipher(clearText, charCount, key);

    return 0;
}






