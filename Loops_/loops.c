#include <stdio.h>
#include <stdbool.h>

int main(){

    // --------------for--------------
    //   Variable; Stopping conditions; How will the parameters change.
    for(int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }

    for(float i = 100; i > 20; i /= 2){
        printf("%.2f\n", i);
    }

    // --------------while--------------
    bool isHasCar = true;
    int x = 0;
    while(isHasCar){
        scanf("%d", &x);
        if(x == 111)
            isHasCar = false;
    }
    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }

    // --------------do--------------
    //Runnig the code ones --> then start the while loop if the condition returning true.
    bool isHasPlane = false;
    do {
        printf("Yes\n");
    } while(isHasPlane);

    // --------------operators--------------
    for(int x = 0; x <= 5; x++){
        // if(x == 3)
            // break;  // break the loop
        if(x % 2 == 0)
            continue;
        printf("%d\n", x);
    }

    int arr[] = {1, 3, 7, -123, 87, 100};
    int max = 0;
    for(int indx = 0; indx < 6; indx++){
        // printf("%d\n", arr[indx]);
        if (max < arr[indx]) // "<" = max number | ">" = min number
            max = arr[indx];
    }
    printf("%d\n", max);
    return 0;
}