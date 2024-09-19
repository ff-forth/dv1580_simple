#include <stdio.h>
#include <stdlib.h>

void sub(int a, int b){
    int result = a - b;
    printf("%d\n" ,result);
}

int main(int argc, char *argv[]){
    // convert arguments to integer
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    // call sub function
    sub(a,b);
    return 0;
}

// gcc -o sub sub.c && ./sub 1 2
// gcc -o sub sub.c && ./sub 2 1
