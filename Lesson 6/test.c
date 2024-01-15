#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int x,y,sum,sub,multi,div,mod; 

    x=5;
    y=2;
    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=x/y;
    // Burada eger biz rəqəmlərin düzgün bölünmesini isdəyiriksə onda x y və div float olaraq tanımlamalıyıq.
    mod=x%y;

    printf("Sum: %d\n",sum);
    printf("Subtraction: %d\n",sub);
    printf("Multiplication: %d\n", multi);
    printf("Division: %d\n",div);
    printf("Mod: %d\n\n\n", mod);


    int myNumber = 1;

    printf("++myNumber = %d\n",++myNumber);
    printf("myNumber++ = %d\n", myNumber++);
    printf("myNumber = %d\n\n\n", myNumber);

    return 0;
    
}