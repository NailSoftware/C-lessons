#include<stdio.h>
#include<stdlib.h>

int main(){
    // int myNumberOne, myNumberTwo;
    // printf("Enter two number:");
    // scanf("%d %d", &myNumberOne, &myNumberTwo);
    // printf("The number you entered  %d - %d", myNumberOne, myNumberTwo);

    /*
    Dairənin sahəsini və uzunluğunu tapan program
    1- ehtiyacımız olan variables tap və tanımla
    2- variables type tap
    3- düsturu tanımla
    4- userdən data -nı al
    5- run
    6- return
    */
    /*
    float r, circumference, area;
    const float PI = 3.1415;
    printf("Circle radiusunu girin:");
    scanf("%f", &r);
    circumference = 2*PI*r;
    area = PI*r*r;
    printf("Circumference of the circle:%f\n", circumference);
    printf("Area of circle:%f", area);

    return 0;
    */

   /*
    4 Ədəd rəqəm alıb kvadratını və kubunu tapan program
    1- ehtiyacımız olan variables tap və tanımla
    2- variables type tap
    3- düsturu tanımla
    4- userdən data -nı al
    5- run
    6- return
    */

   float numberOne, numberTwo, numberThree, numberFour, square, cube;


   numberOne = 0.0;
   numberTwo = 0.0;
   numberThree = 0.0;
   numberFour = 0.0;
   square = 0.0;
   cube = 0.0;

   printf("Enter four numbers:");
   scanf("%f %f %f %f", &numberOne, &numberTwo, &numberThree, &numberFour);

   printf("The number\t\t");
   printf("Squareof number\t\t");
   printf("Cube of number\t\t\n");

   printf("-----------\t\t");
   printf("-----------\t\t");
   printf("-----------\t\t\n");

   printf("%f\t\t", numberOne);
   printf("%f\t\t", numberOne*numberOne);
   printf("%f\t\t\n", numberOne*numberOne*numberOne);

   printf("%f\t\t", numberTwo);
   printf("%f\t\t", numberTwo*numberTwo);
   printf("%f\t\t\n", numberTwo*numberTwo*numberTwo);

   printf("%f\t\t", numberThree);
   printf("%f\t\t", numberThree*numberThree);
   printf("%f\t\t\n", numberThree*numberThree*numberThree);

   printf("%f\t\t", numberFour);
   printf("%f\t\t", numberFour*numberFour);
   printf("%f\t\t\n", numberFour*numberFour*numberFour);

   printf("\n\n");

    return 0;

}
