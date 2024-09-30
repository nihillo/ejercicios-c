#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>

// Arrays are already defined with this interface:
typedef struct arr_integer {
  int size;
  type *arr;
} arr_integer;

arr_integer alloc_arr_integer(int len) {
  arr_integer a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
  return a;
}


int solution(arr_integer input_array) {

}


int main(int argc, char *argv[]) {

    
    return 0;
}