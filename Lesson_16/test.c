#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    /*
    Imtahan ballarını User -dən alaraq ortasını tapan program.
    */

    // int i;
    // float examGrade, sumGrade;

    // i = 1;
    // examGrade = 0.0;
    // sumGrade = 0.0;

    // do{
    //     printf("%dth exam grade:",i);
    //     scanf("%f",&examGrade);
    //     if (examGrade == 0){
    //         break;
    //     }
    //     if(examGrade < 0){
    //         printf("Please enter a positive number\n");
    //         continue;
    //     }else{
    //         sumGrade += examGrade;
    //     }
    //     i++;

    // } while (examGrade != 0);
    
    // printf("\nYou entered %d exam grades\n",i-1);
    // printf("Avarege:%f\n",sumGrade/(i-1));

    /*
    Padişahdan şahmat taxtasının xanaları qədər 2 qat artan buğday dənəsi isdəyən riyaziyyatçı.
    */

//    int i;
//    double wheat=1;
//    double sumWheat=0;

//    for ( i = 0; i < 64; i++){
//     printf("%d. xana ucun riyaziyyatciya verilen bugda sayisi:%20.0f\n",i,wheat);
//     sumWheat += wheat;
//     wheat *=2;
//    }
//    printf("\n bilgine verilecek toplan bugday sayisi:%20.0f\n",sumWheat);

    /*
    User tərəfindən alınan sayının faktorialının tapılması.
    */

    // int i,factorial,number;
    // factorial=1;

    // printf("Enter a number:");
    // scanf("%d",&number);

    // for (i = 1; i <= number; i++){
    //     factorial *=i;
    // }
    // printf("%d! = %d\n",number,factorial);

    /*
    Loops -un içində olan loops :)
    */

//    int i,j,number;

//    for (i = 0; i < 4; i++){
//     for ( j = 0; j < 3; j++){
//         printf("Salam C\n");
//     }
//     printf("--------\n");
//    }


    // printf("Enter a number:");
    // scanf("%d",&number);

    // for (i = 0; i < number; i++){
    //     for (j = 0; j <= i; j++){
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    // for (i = 1; i <= number; i++){
    //     for ( j = number; j >= i; j--){
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    // int number,i=1,smallestNumber=0,largestNumber=0;

    // do{
    //     printf("%dth number:",i);
    //     scanf("%d",&number);

    //     if(number == 0) break;
    //     if(number<smallestNumber) smallestNumber = number;
    //     if(number>largestNumber) largestNumber = number;

    //     i++;

    // } while (number != 0);

    // printf("%d is largest number.\n",largestNumber);
    // printf("%d is smallest number.",smallestNumber);


    /*
    Fibonacci -nin sıralaması.
    */

//    int first,second,third,i,number;

//    first = 1;
//    second = 1;
//    third = 1;

//    printf("Enter a number:");
//    scanf("%d",&number);
//    printf("1 1 ");

//    for (i = 11; i <= number-2; i++){
//     first = second;
//     second = third;
//     third = first + second;
//     printf("%d ",third);

//    }

/*
1
22
333
4444
5555 -- app

1111
222
33
4 -- appp
*/
   
//    int i,j,number;

//    printf("Enter a number value:");
//    scanf("%d",&number);

//    for ( i = 1; i <= number; i++){
    
//     for ( j = 1; j <= i; j++){
//         printf("%d",i);
//     }
//     printf("\n");
//    }

//    for ( i = number; i >= 1; i--){
    
//     for ( j = 1; j <= i; j++){
//         printf("%d",i);
//     }
//     printf("\n");
//    }

//     for ( i = 1; i <= number; i++){
//         for ( j = number-i ; j >= 0 ; j--){
//             printf("%d",i);
//         }
//         printf("\n");
//    }


/*
* * * * *
*       *
*       *
*       *
* * * * * -- app
*/
    // int i,j,a,number;

    // printf("Enter a number:");
    // scanf("%d",&number);

    // for ( i = 1; i <= number; i++){
        
    //     for ( j = 1; j <= number; j++){
    //         if (i==1 || i==number){
    //             printf("* ");
    //         }else{
    //             if(j==1){
    //                 printf("* ");
    //             }else if(j==number){
    //                 printf("*");
    //             }else{
    //                 printf("  ");
    //             }
                
    //         }
            
    //     }
    //     printf("\n");
    // }
    
    /*
        *
       ***
      *****
     ******* -- app

     *******
      *****
       ***
        *    -- app
    */

//    int i,j,a,number,countOfSpace,oddNumber;

//    printf("Enter a odd number:");
//    scanf("%d",&number);

    
//     if (number%2 == 0){
//         printf("Please enter odd number.");
//         return 0;
//     }
//     countOfSpace = (number - 1)/2 + 1;

//     for ( i = 1; i <= number; i++){
//         if(i%2 != 0){
//             oddNumber = i;
//             for( j = countOfSpace; j >=1; j--){
//                 printf(" ");
//             }
//             countOfSpace--;
            
//             for ( a = 1; a <= oddNumber; a++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }

   
        
//     printf("\n");

    // int i,j,number;

    // printf("Enter a number:");
    // scanf("%d",&number);

    // for ( i = 1; i <= number; i++){
    //     for (j = 1; j <= i; j++){
    //         printf("  ");
    //     }
    //     for ( j = 1; j <= number*2-1-(i*2); j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*
    User -dən alınan Boyuk herife qeder olan heriflerler piramida qur.
    */

//    int i,j;
//    char input, character = 'A';

//    printf("Enter a uppercase letter:");
//    scanf("%c",&input);

//    for ( i = 1; i <= (input - 'A' + 1); i++){
//     for ( j = 1; j <=i; j++){
//         printf("%c",character);
//     }
//     character++;
//     printf("\n");
//    }

/*
Paskal ücbucağı qurmaq
*/
   
//    int space,i,rows,j,number = 1;

//    printf("Enter the number of rows:");
//    scanf("%d", &rows);

//    for ( i = 0; i < rows; i++){

//         for ( space = 1; space <= rows - i;space++){
//             printf("  ");
//         }    
//         for ( j = 0; j <= i; j++){
//             if (j==0 || i==0){
//                 number = 1;
//             }else{
//                 number = number*(i-j+1)/j;
//             }

//             printf("%4d",number);   
//         }
        
//         printf("\n");
//    }


/*

User -dən alınan sayı qədər (tək sayı) A hərifi yazsın.

A
 A
  A
 A
A 

user 5 girdiyində belə bir fiqur.

*/

    int number,i,j;

    printf("Enter a number (odd number):");
    scanf("%d",&number);

    for ( i = 1; i <= number; i++){
        if (i <= (number+1)/2){
            for ( j = 1; j <= i; j++){
                printf(" ");
            }
            printf("A\n");
        }else{
            for ( j = 0; j <= number - i; j++){
                printf(" ");
            }
            printf("A\n");
        }
    }
    

   printf("\n\n\n");

   return 0;
}