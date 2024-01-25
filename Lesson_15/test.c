#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    /*
    User -dən alınan ədədi 1 -dən 10 -a qədər vur və ekranda yazdır.
    */

    int i, number;
    number = 0;
    i = 1;

    printf("Enter a number from 1 to 10:");
    scanf("%d", &number);

    if (number < 1 || number > 10)
    {
        printf("Please dont do that\n");
        return 0;
    }
    while (i <= 10)
    {
        printf("%d x %d = %d \n",number, i, number*i);
        i++;
    }

    /*
    User tərəfindən daxil edilən ədədin sadə olub olmadığını yoxlayan program.
    */

   int number, i;

   number = 0;
   i = 2;

    printf("Please enter a positive number:");
    scanf("%d",&number);

   if(number < 0){
    printf("Please enter a positive number\n");
    return 0;
   }
   while (i < number/2)
   {
    if(number%i == 0){
        printf("\n%d divided by %d so it can't be a prime number", number,i);
        return 0;
    }
    i++;
   }
   printf("\n%d is a prime number", number);
    /*
    User tərəfindən daxil edilən ədədə qədər olan bütün sadə ədədləri ekrana yaz.
    */

   int number,i,j,control;

   printf("Enter a number:");
   scanf("%d",&number);

   for (i = 2; i <= number; i++){

    control=1;
    for ( j = 2; j <= i/2; j++){
        if (i%j == 0){
            control=0;
            break;
        }
    }
    if (control != 0){
        printf("%d ",i);
    }
   }
    return 0;
}