#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // while(n > 0) {
    //     sum += n;
    //     n--;
    // }

    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Result: %d\n", sum);
    
    return 0;
}