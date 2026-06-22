#include <stdio.h>
#include <stdlib.h>

void function();

int gvar1 = 0;
int gvar2 = 10;

static int svar1 = 0;
static int svar2 = 11;

int main(){
    int lvar1 = 0;
    int lvar2 = 111;
    int lvar3;

    static int svar3;
    static int svar4 = 1100;

    function();

    printf("\ngvar1 = %p , gvar2 = %p , svar1 = %p , svar2 = %p , lvar1 = %p , lvar2 = %p , lvar3 = %p\n",&gvar1,&gvar2,&svar1,&svar2,&lvar1,&lvar2,&lvar3);
    printf("\nsvar3 = %p , svar4 = %p\n",&svar3,&svar4);

    printf("\nfunction = %p , main = %p\n",function,main);

    getchar();

    return 0;
}

void function(){
    int a = 10, b = 100;
    printf("\n%d + %d = %d",a,b,a+b);
}