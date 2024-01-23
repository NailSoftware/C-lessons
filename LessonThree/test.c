#include<stdio.h>

int main(){
    int myNumberOne = 123;
    unsigned int myNumberTwo = 123345;
    long int myNumberThree = 1232342;
    long long int myNumberFour = 123234212;
    char myLetter = 'C';
    float myDecimalNumber = 1.12;
    double myDoubleNumber = 123.123;

    printf("%d\n", myNumberOne);
    printf("%u\n", myNumberTwo);
    printf("%ld\n", myNumberThree);
    printf("%lld\n", myNumberFour);
    printf("%f\n", myDecimalNumber);
    printf("%.2f\n", myDecimalNumber);
    printf("%c\n", myLetter);
    printf("%lf\n\n\n", myDoubleNumber);


    // Use integer data type

    int numberOne, numberTwo, numberThree, numberFour, anyNumber, sum;

    const int numberFive = 5;

    numberOne = 1;
    numberOne = 10; // numberOne last count = 10

    anyNumber = numberOne; // anyNumber = 1

    numberTwo = 2;
    numberThree = 3;
    numberFour = 4; 

    sum = numberOne + numberTwo + numberThree + numberFour + numberFive;

    printf("Sum: %d\n", sum);

    int myExtraction, myMultiplication, myDivision;

    myExtraction = numberFive - numberThree;
    myMultiplication = numberFour * numberTwo;
    myDivision = numberThree / numberOne;



    return 0;
};