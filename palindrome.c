#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool solution(char * inputString) {
    bool isPalindrome = true;    
    int length = strlen(inputString);
    bool isOdd = (length % 2 != 0);
    int stackLength = length/2;
    char stack[stackLength];

    int stackTop = stackLength - 1;
    int i = 0;
    

    while (isPalindrome == true && i < length) {
        if (i < stackLength) {
            stack[i] = inputString[i];
        } else if (!(isOdd == true && i == stackLength)) {
            if (inputString[i] != stack[stackTop]) {
                isPalindrome = false;
            }
            stackTop --;
        }

        i++;
    }

    return isPalindrome;
}


int main(int argc, char *argv[]) {
    char inputString[] = "ABACABA";
    
    if (solution(inputString)) {
        printf("Palíndromo\n");
    } else {
        printf("No palíndromo\n");
    }
    
    return 0;
}