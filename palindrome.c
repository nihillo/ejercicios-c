#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool solution(char * input_string) {
    bool is_palindrome = true;    
    int length = strlen(input_string);
    bool is_odd = (length % 2 != 0);
    int stack_length = length/2;
    char stack[stack_length];

    int stack_top = stack_length - 1;
    int i = 0;
    

    while (is_palindrome == true && i < length) {
        if (i < stack_length) {
            stack[i] = input_string[i];
        } else if (!(is_odd == true && i == stack_length)) {
            if (input_string[i] != stack[stack_top]) {
                is_palindrome = false;
            }
            stack_top --;
        }

        i++;
    }

    return is_palindrome;
}


int main(int argc, char *argv[]) {
    char input_string[] = "ABACABA";
    
    if (solution(input_string)) {
        printf("Palíndromo\n");
    } else {
        printf("No palíndromo\n");
    }
    
    return 0;
}