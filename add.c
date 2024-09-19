#include <stdio.h>
#include <stdlib.h> 

void add(int a, int b){
    int result = a + b;
    printf("%d\n" ,result);
}

int main(int argc, char *argv[]){
    // convert arguments to floategers
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    // call add function
    add(a,b);
    return 0;
}

// gcc -o add add.c && ./add 1 2
