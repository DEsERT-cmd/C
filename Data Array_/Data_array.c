#include <stdio.h>
int main(){
    //creating a digit array of 5 digits.
//    int arr[5];
    //[0,0,0,0,0]
    int arr[5] = {1,2,3,4,5};
    arr[0] = 56;
//    printf("First element: %d\n", arr[0]);
    float numbers[3];
    numbers[0] = 1.15;
    numbers[1] = 2.15;
    numbers[2] = 3.15;
    
//    char word[] = {'h', 'e', 'l', 'l', 'o'};
    char word[] = "hello world!";
    printf("%s\n", word);
//     s - "array"
//    int array[2][3];
    
    int array[3][5] = {
        {1,2,3,2,1},
        {4,5,6,5,4},
        {7,8,9,8,7}
    };
    printf("number: %d\n", array[1][2]);
    
    
    return 0;
}
