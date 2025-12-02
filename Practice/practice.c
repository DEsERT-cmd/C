#include <stdio.h>
int digits_sum(int num);
int most_common(int arr[], int size);

int main(){
    int arr[] = {1,2,3,3,3,4,5};
    int q1 = digits_sum(555);
    int q2 = most_common(arr, 7);
    printf("%d\n", q2);
    printf("%d\n", q1);
    return 0;

    
}

int digits_sum(int num){
    int counter = 0;
    while(num != 0){
        counter += num % 10;
        num = num / 10;
    }
    return counter;
}
int most_common(int arr[], int size){

    int maxCount = 0;
    int maxValue = arr[0];

    for(int i = 0; i < size; i++){
        int count = 0;
        
        for (int j = 0; j < size; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            maxValue = arr[i];
        }
    }
    return maxValue;
}
//do again the most common question. <3;