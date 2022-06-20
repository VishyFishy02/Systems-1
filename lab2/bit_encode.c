/*
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE
 * TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO
 * THIS ASSIGNMENT.
 *
 * Name: Vishal Kumar
 */

#include <stdio.h> /* this tells the preprocessor to copy IO library prototypes
and other information from the file /usr/include/stdio.h */

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
    #ifdef PROMPT
        /* keep track of numbers per line */
        int digitsOnLine = 0;
    #endif
    int i;
    /* print out each char in array as a hex value */
    #ifdef PROMPT
        printf("hex encoding:\n\t");
    #endif
    for(i=0; i < n; i++){
        printf("%02X ", str[i]);
        #ifdef PROMPT
            digitsOnLine++;
            /* start new line after 10 */
            if(digitsOnLine == 10){
                printf("\n\t");
                digitsOnLine = 0;
            }
        #endif
    }
}
/*
 * function to set ith and i+4th bit of an unsigned char to 1
 */
unsigned char setBit(unsigned char key, int i){

    /* use bitshift and bitwise or to place 1s in key */
    key = ((1 << i) | key);
    key = (1 << (i + 4) | key);

    return key;
}

/*
 * function to create 8 bit key from user input
 */
unsigned char create_Key(){
    /* get key in ascii */
    unsigned char i = 0;
    unsigned char bit;
    unsigned char key = 0;
    #ifdef PROMPT
        printf("\nenter 4-bit key: ");
    #endif
    while((bit = getchar()) != '\n' && i < 4 ){
        /* process each bit into key */
        if(bit == 49){
           key = setBit(key, (3 - i));
        }
        i++;
    }

    return key;
}

/*
 * Function to perform left rotation on cleartext
 */
unsigned char rotateRight(unsigned char str[], int i){
    /*
     * rotate odd indexed values left
     */
    unsigned char y = 1;                    /* 0000 0001 */
    /* do right rotation algorithm */
    str[i]  = (str[i] >> 1)| ((str[i] & y) << 7);

    return str[i];
}

/*
 * Function to perform right rotation on cleartext
 */
unsigned char rotateLeft(unsigned char str[], int i){
    /*
     * rotate even indexed values left
     */
    unsigned char y = 128;                /* 1000 0000 */
    /* do left rotation algorithm */
    str[i] = (str[i] << 1) | ((str[i] & y) >> 7);

    return str[i];
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
            cipherStr[i] = rotateLeft(cipherStr, i);
        } else {
            cipherStr[i] = rotateRight(cipherStr, i);
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

    #ifdef PROMPT
        printf("enter cleartext: ");
    #endif

    charCount = input(clearText, 200);

    #ifdef PROMPT
        printf("%s\n",clearText);
    #endif

    #ifdef PROMPT
        /* print out string in hex */
        printHex(clearText, charCount);
    #endif

    /* get key and  perform cipher */
    key = create_Key();;
    cipher(clearText, charCount, key);

    return 0;
}


