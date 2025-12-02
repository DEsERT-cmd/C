#include <stdio.h>
#include <stdbool.h>

//-----------if/else if/else-------------
int example1(){
    int x;
    printf("Enter the number 7: ");
    scanf("%d", &x);
//  if(x >= 7)
//  if(x <= 7)
//  if(x != 7)
    if(x == 7)
        printf("x equal: 7");
    else if(x == 5)
        printf("x equal: 5");
    else{
        printf("x equal something else: %d\n", x);
        return 2;
    }
    return 0;
}
int example2(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x == 10 || x == 20){
        printf("x equal 10 or 20\n");
        }   
    else if(x > 10 && x < 20){
        printf("x between 10 and 20\n");
        }
    else{
        printf("else\n");
        }
    return 0;

}
int example3(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x > 10){
        if(x == 12){
            printf("12\n");
        }
        else{
            printf("u win!\n");
        }
    }
    return 0;
}
int example4(){
    bool HeHasCar = true;
    bool HeHasPlane = false;
    if(HeHasCar){
        printf("Yes car\n");    //. (...) --> if(HeHasCar == true);
        if(!HeHasPlane){        //. (!...) --> if(HeHasPlane == false);
            printf("No plane\n");
        }
    }
    else{
        printf("No\n");
    }
    return 0;
}

//-----------switch----------
int example5(){
    int x = 12;
    switch(x){
        case 10: //if(x == 10)
            printf("10\n");
            break;
        case 12: //if(x == 12)
            printf("12\n");
            break;
        case 14: //if(x == 14)
            printf("14\n");
            break;
        case 16: //if(x == 16)
            printf("16\n");
            break;
        default: //else
            printf("error\n");

    }
    return 0;
    }


int main(){
    example5();
    return 0;
    // if(example1() == 0){
    //     printf("nice\n");
    //     return 0;
    // }

    // else{
    //     printf("Jopa");
    // }
}