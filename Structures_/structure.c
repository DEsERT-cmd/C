#include <stdio.h>
#include <string.h> //<--- for "strcpy"

struct Car{
    int speed;
    char owner[50];
    float weight;
}; // <--- ";" at the end.

int main(){
    struct Car toyota;
    // toyota.owner = "Yasha"; // cant do that
    // strcpy(toyota.owner, "Yasha"); // for char arr we use "strcpy".
    // toyota.speed = 280;
    // toyota.weight = 2.7; 
    // printf("%d\n", toyota.speed);
    struct Car Toyota = {270, "Yasha", 2700.0f};
    struct Car audi = {300, "Yasha", 2300.0f}; //<--create them only like this.
    printf("%d\n", Toyota.speed);
    printf("%d\n", audi.speed);
    return 0;
}