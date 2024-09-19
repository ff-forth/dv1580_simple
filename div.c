#include <stdio.h>
#include <stdlib.h> //atof <-> ASCII to float

void divide(float a, float b){
    if (b == 0) { // if b = 0, prfloat DIV ZERO NOT ALLOWED!
        printf("DIV ZERO NOT ALLOWED!\n");
    } 
    else { // else call div function
        float result = a/b;
        printf("%.1f\n" ,result);
    }
}

int main(int argc, char *argv[]){
    // convert arguments to float
    float a = atof(argv[1]);
    float b = atof(argv[2]);

    // call div function
    divide(a,b);
    
    return 0;

}

// gcc -o div div.c && ./div 3414 0
// --> output: "DIV ZERO NOT ALLOWED!"

// gcc -o div div.c && ./div 3414 2
// --> output: 1707

// gcc -o div div.c && ./div 1707 2
// --> output: 853.5
