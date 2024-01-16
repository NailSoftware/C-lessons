#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int myNumber, bolum, qalan, sum;
    sum = 0;

    printf("Enter a 4-digit number:");
    scanf("%d", &myNumber);

    // 1000 likdəki rəqəmi tap və cəmlə 
    bolum = myNumber / 1000 ;
    sum += bolum; 
    qalan = myNumber % 1000;

    // 100 lükdəki rəqəmi tap və cəmlə
    bolum = qalan / 100;
    sum += bolum;
    qalan = qalan % 100;

    // 10 luqdakı rəqəmi tap və cəmlə
    bolum = qalan / 10;
    sum += bolum;
    qalan = qalan % 10;

    // Sonuncu rəqəmi tap və cəmlə
    bolum = qalan;
    sum +=bolum;

    printf("The sum of the 4-digit number you entered is 12 - %d\n", sum);

    return 0;
    
}