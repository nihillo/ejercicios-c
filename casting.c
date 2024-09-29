#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    double e, f = 2.33;
    int i = 6;
    e = f * i;
    double d = (int)(f * i);

    printf("f: %f, i: %d\n", f, i);
    printf("e = f*i -> %f\n", e);
    printf("d = (int)(f * i) -> %f\n", d);
    
    return 0;
}