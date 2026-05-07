
/*
Name: James Graham
Student ID: 202028828
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100] = ""; 

    // // process the command-line data using appropriate string functions
    if (argc > 1) {
        // copy first arg to buffer
        strcpy(buffer, argv[1]);

        // loops through args
        for (int i = 2; i < argc; i++) {
            strcat(buffer, "-"); 
            strcat(buffer, argv[i]); 
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}