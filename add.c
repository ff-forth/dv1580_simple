#include <stdio.h>
#include <stdlib.h> 

void add(int a, int b){
    int result = a + b;
    printf("%d\n" ,result);
}

int main(int argc, char *argv[]){
    
    char *endptr1, *endptr2;
    
    // convert arguments to floategers
    long a = strtol(argv[1], &endptr1, 10);
    long b = strtol(argv[2], &endptr2, 10);
    
    if (endptr1 != argv[1] && endptr2 != argv[2]){
        // call add function
        add(a,b);
    return 0;
    }
}

// gcc -o add add.c && ./add 1 2
