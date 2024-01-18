#include<stdio.h>
#include<stdlib.h>

int main(){

    int myNumberOne, myNumberTwo;
    myNumberOne = 12;
    myNumberTwo = 14;

   if (myNumberOne>myNumberTwo){
    printf("myNumberOne is greater than myNumberTwo.");
   }

   int score;

   printf("Enter your score:");
   scanf("%d",&score);

   if (score>60)
   {
    printf("Congratulations you passed exam\n");
    printf("Your score:%d\n\n",score);
   }else{
    printf("Unfortunately you did not pass exam\n\n");
   }

    int myNumber;
    printf("Enter a number:");
    scanf("%d", &myNumber);
    if(myNumber>0){
        printf("The value is a positive number\n\n");
    }else if(myNumber>0){
        printf("The value is a negative number\n\n");
    }else{
        printf("Your number is 0");
    }

    int num;
    num = 23;

    (num <= 100) ? printf("Num 100 den balacadi"): printf("Num 100 den boyukdu");

    return 0;
}