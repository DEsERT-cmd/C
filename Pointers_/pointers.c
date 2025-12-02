#include <stdio.h>

struct Abstract {
        int width, height;
    };
void calc(struct Abstract *obj);


int main(){
    int x = 0;
    //creating the pointer.
    int * pX = &x;
    //& - pointer.
    // printf("%p\n", pX); // print the "address".
    //x != $x.  &x it is the "address". --> "%p" --> "pointer"
    // printf("%d\n", *pX);
    //pointer --> "address" --> digit
    *pX = 10;
    // printf("%d\n", *pX);

    struct Abstract square = {5, 7};
    calc(&square);

    return 0;
}
void calc(struct Abstract *obj){
    int res = obj->width * obj->height;
    printf("%d\n", res);
}