#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int myNumber;

    myNumber = 7;
    myNumber += 12;
    myNumber -= 1;
    myNumber *= 2;
    myNumber /=2;
    myNumber %=3;
    printf("My number is %d \n\n", myNumber);

    myNumber = 7; // 00000111
    myNumber &=12; // 00001100
    // Answer is 4
    printf("My number is %d \n\n", myNumber);

    myNumber = 7; // 00000111
    myNumber |=12; // 00001100
    // Answer is 15
    printf("My number is %d \n\n", myNumber);

    myNumber = 7; // 00000111
    myNumber ^=12; // 00001100
    // Answer is 11
    printf("My number is %d \n\n", myNumber);

    myNumber = 7; // 00000111
    myNumber <<=2; // 00011100
    // Answer is 28
    printf("My number is %d \n\n", myNumber);

    myNumber = 7; // 00000111
    myNumber >>=2; // 00000001
    // Answer is 1
    printf("My number is %d \n\n", myNumber);
    
    return 0;
    
}