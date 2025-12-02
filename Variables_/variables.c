#include <stdio.h>
#include <stdbool.h>

int main(){

    //------------integer------------
    //range: (-2mil+- <-> 2mil+-)
    //int num_;
    //int num_ = 100;
    int x = 5, y = 10, res;
    // const a0 = 12;
    // a0 = 13; --> error.
    //cannot change a constant after it has been defined.

    //range: (0 <-> 4mil+-)
    unsigned int a = 5;
    // x += 5;
    // y -= 5;
    // x++ ==> x += 1
    res = x + y;

    //%d - for integers
    // printf("variable: %d\n", res);
    //              "digit"
    // printf("variable: %d + %d = %d\n", x, y, res);
    //                 x.   y.   res.  

    //--------------short------------
    //!less memory used!
    //range: (-32 <-> 768)
    short a1 = 14;
    //range: (0 <-> 64,000)
    unsigned short a2 = 15;

    //-------------long--------------
    //range: (-4mil+- <-> 4mil+-)
    long a3 = 5;
    //range: (0 <-> 8mil+-)
    unsigned long a4 = 6;
    // for super large numbers
    long long a5 = 1000;

    //-------------float--------------
    float a6 = 4.12345f;
    double a7 = 5.123456789f;
    long double a8 = 5.12345678910123456789f;
     //.             %.3f - will print 3 digits after dot.
     //.             %.5f - will print 5 digits after dot.
    //  printf("Result: %.1f\n", a6-a7);
     //.             "float"

    //-------------char--------------
    // '' - !!!
    char sym;
    sym = 'a';
    // printf("%c", sym);
    //.    "char"
    
    //-------------bool--------------
    //need #include <stdbool.h>
    bool True = true;
    bool False = false;
    //--------------------------------

    short num;
    //scanf("",&x) <=> input()
    //& --> pointer on the var.
    printf("Enter a number: ");
    scanf("%hd", &num);
    //Specify in which var the entered number will be stored.
    printf("The entered number is: %hd\n", num);
    
    
    return 0;
}
