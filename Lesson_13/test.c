#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    // int a;

    // a = 7;

    // switch (a)
    // {
    // case 1:
    //     printf("Monday\n");
    //     break;
    // case 2:
    //     printf("Thuesday\n");
    //     break;
    // case 3:
    //     printf("Wednesday\n");
    //     break;
    // case 4:
    //     printf("Thursday\n");
    //     break;
    // case 5:
    //     printf("Friday\n");
    //     break;
    // case 6:
    //     printf("Saturday\n");
    //     break;
    // case 7:
    //     printf("Sunday\n");
    //     break;
    
    // default:
    //     printf("There is not such s day.");
    // }

    // int x, y, z;

    // x = 12;
    // y = 11;

    // switch (x)
    // {
    //     case 2:
    //         z = 20;
    //         break;
        
    //     default: 
    //         switch (y)
    //         {
    //             case 11:
    //                 z = 19;
    //                 break;
                
    //             default:
    //                 z = -90;
    //                 break;
    //         }
    //     break;
    // }
    // printf("z is %d.",z);

    /*  
    Bir mağazada həftənin günləeində müxtəlif satışlar olmuşdur. Biz elə bir program yazmalıyıq ki user dediyi günün satışlarını toplasın və ekranda gösdərsin.
    monday-2
    tuesday-5
    wednesday-7
    thursday-11
    friday-12
    saturday-15
    sunday-20
    */

//    int numberOfProducts, day;
//    char *dayName;

//    numberOfProducts = 0;
//    day = 0;

//    printf("Enter number of the a day(1-7)");
//    scanf("%d",&day);

//    switch (day)
//    {
//     case 1:
//         numberOfProducts +=2;
//         dayName = "Monday";
//         break;
//     case 2:
//         numberOfProducts +=5;
//         dayName = "Tuesday";
//         break;
//     case 3:
//         numberOfProducts +=7;
//         dayName = "Wednesday";
//         break;
//     case 4:
//         numberOfProducts +=11;
//         dayName = "Thursday";
//         break;
//     case 5:
//         numberOfProducts +=12;
//         dayName = "Friday";
//         break;
//     case 6:
//         numberOfProducts +=15;
//         dayName = "Saturday";
//         break;
//     case 7:
//         numberOfProducts +=20;
//         dayName = "Sunday";
//         break;
//     default:
//         break;
//    }

//     printf("%s gununun sonunda  %d satis edildi.",dayName,numberOfProducts);

    /*
    Əgər biz həmin günə qədərki bütün satişları isdəyiriksə onda belə bir program yaza bilərik.
    */

//    int numberOfProducts, day;
//    char *dayName;

//    numberOfProducts = 0;
//    day = 0;

//    printf("Enter number of the a day(1-7):");
//    scanf("%d",&day);

//    if (day > 1 || day < 7)
//    {
//     printf("Please enter a number from 1 to 7\n");
//    }
   

//    switch (day)
//    {
//     case 7:
//         numberOfProducts +=20;
//         if (day == 7){dayName = "Sunday";}

//     case 6:
//         numberOfProducts +=15;
//         if (day == 6){dayName = "Saturday";}
        
//     case 5:
//         numberOfProducts +=12;
//         if (day == 5){dayName = "Friday";}
        
//     case 4:
//         numberOfProducts +=11;
//         if (day == 4){dayName = "Thursday";}

//     case 3:
//         numberOfProducts +=7;
//         if (day == 3){dayName = "Wednesday";}

//     case 2:
//         numberOfProducts +=5;
//         if (day == 2){dayName = "Tuesday";}

//     case 1:
//         numberOfProducts +=2;
//         if (day == 1){dayName = "Monday";}

//     default:
//         break;
//    }

//     printf("%s gununun sonunda umumi olaraq %d satis edildi.",dayName,numberOfProducts);

    /*
    Verilmiş 4 operatordan (+, -, *, /) 1 ni seçən və user -dən 2 rəqəm alaraq onları operator -dan istifadə edərək yazan program.
    */

//    char myOperator;
//    float number1, number2;

//    printf("Choose operator(+, -, *, /):");
//    scanf("%c", &myOperator);

//    printf("Enter two numbers:");
//    scanf("%f%f",&number1, &number2);

//    printf("\noperators: %c \nnumber1: %f \nnumber2: %f\n",myOperator, number1,number2);

//    switch (myOperator)
//    {
//     case '+': printf("Result: %f", number1 + number2) ; break;
//     case '-': printf("Result: %f", number1 - number2) ; break;
//     case '*': printf("Result: %f", number1 * number2) ; break;
//     case '/': printf("Result: %f", number1 / number2) ; break;
//     default: printf("You entered the wrong operator.");
//    }

    /*
    User isdədiyi ayın nömrəsini programa yazaraq həmin ayın neçə gün olmasını təyin etməyə kömək edən program. 
    */

   int monthNumber;

   printf("Which month:");
   scanf("%d", &monthNumber);

   switch (monthNumber)
   {
        case 4: 
        case 6: 
        case 9:
        case 11: printf("There are 30 days in the %dth month\n",monthNumber);
                break;
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10:
        case 12: printf("There are 31 days in the %dth month\n", monthNumber); 
                break;
        case 2: printf("There are 28 and 29 days in the %dth month\n",monthNumber);
                break;
        default: printf("There is not %dth month\n", monthNumber);
   }


    return 0;
}