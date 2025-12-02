#include <stdio.h>
#include "importExample.h"

//func skeleton.  ---> doing that for correct compilation.
void HelloWorld(void); // <--- void because the func does not accept any parameters.
int mult(int a, int b); // <--- int because the func return integer.


int main(){   
//    HelloWorld();
//    Grape(); //<-- imported func(from "importExample.h")
    // sum(3,5); //<-- imported func(from "importExample.h")
    // char arr[] = {'a', 'b', 'c', 'd'}; //<-- imported func(from "importExample.h")
    // string(arr);

    int result = mult(6,6);
    printf("%d\n", result);
    return 0;
}

//void --> for func that return None.
void HelloWorld(){
    printf("Hello, world!\n");
}
int mult(int a, int b){
    int rest = a * b;
    return rest;
}