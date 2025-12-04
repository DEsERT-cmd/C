#include <stdio.h>
#include <stdbool.h>

// decloration of functions;
void add_ten(int *p);
void swap(int *a, int *b);
int* find_max(int arr[], int size);
void set_to_zero(int **p);


void main(){
    // int x = 10;
    // int *p = &x;
    // printf("Value of x: %d\n", x);
    // printf("Address of x: %p\n", &x);
    // printf("Value of p (address of x): %p\n", p);

    // int x = 10;
    // int *p = &x;
    // printf("Before add_ten: %d\n", x);
    // add_ten(&x);
    // printf("After add_ten: %d\n", x);

    // int a = 15;
    // int b = 20;
    // printf("Before swap: a = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("After swap: a = %d, b = %d\n", a, b);

    // int arr[] = {1,5,8,3,7,4,9};
    // int *x = find_max(arr, 7);
    // printf("max num: %d\n", *x);

    // int x = 10;
    // int *p = &x;
    // int **pp = &p;
    // set_to_zero(pp);
    // printf("%d\n",x);

}

void add_ten(int *p){
    *p += 10;
}
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int* find_max(int arr[], int size){
    int *max_num = &arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > *max_num){
            max_num = &arr[i];
        }
    }
    return max_num;
}
void set_to_zero(int **p){
    **p = 0;
}