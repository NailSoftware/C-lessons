#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char myCity[16];
    // printf("My city is:%s\n",myCity); that is correct
    // printf("My city is:%c\n",myCity); that is not correct

    printf("Enter a city:");
    scanf("%s",&myCity); // Əgər bosluq buraxaraq yazarsansa scanf hemin yazinin bosluqdan sonraki hissesini qebul etmir.
    printf("Your city is %s", myCity);
    printf("\n\n");

    char myNumber = 99;
    printf("Elementin reqem olaraq deyeri:%d\n", myNumber);
    printf("Elementin ASCII olaraq deyeri:%c\n", myNumber);
    printf("\n\n");

    return 0;
    
}