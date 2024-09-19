#include <stdio.h>
#include <stdlib.h> //atof <-> ASCII to fload

void mult(float a, float b){
    float result = a*b;
    printf("%.4f\n" ,result);
}

int main(int argc, char *argv[]){
    // convert arguments to float
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    // call mult function
    mult(a,b);
    return 0;

}

// gcc -o mult mult.c && ./mult 3.14 3.14
