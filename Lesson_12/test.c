#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

    // Müəyyən sayda alışdan sonra endirimlərin tətbiq olunması 

    int bookPrice, orderQuantity;
    float discountRate, noDiscountPrice, discountPrice, sum;

    bookPrice = 20; //Kitabın qiyməti
    orderQuantity = 0; // Sifariş miktarı

    printf("Nece eded kitab sifaris vermek isteyirsiniz? :");
    scanf("%d", &orderQuantity);

    if (orderQuantity >= 60)
    {
        discountRate = 0.30;
    }else
        if(orderQuantity >= 30 && orderQuantity <= 60){
            discountRate = 0.20;
        }else if (orderQuantity >=10 && orderQuantity < 30)
        {
            discountRate = 0.12;
        }else {
            discountRate = 0.01;
        }
        
    
    
    noDiscountPrice = orderQuantity * bookPrice;
    printf("Kitabin endirimsiz tutari: %f AZN\n", noDiscountPrice);
    discountPrice = orderQuantity * bookPrice * discountRate;
    printf("Endirim tutariniz: %f AZN\n", discountPrice);
    sum = noDiscountPrice - discountPrice;
    printf("Sifarislerinizin toplam qiymeti: %.2f AZN\n", sum);

    // Məclisin keçirilməsi üçün lazım olan istirakçısı sayısının olub olmamasını yoxlamaq

    int partyA, partyB, partyC, currentCouncilor;
    const int sumCouncilor = 600;

    printf("Meclisdeki partilerin milletvwkili sayilarini girn:");
    scanf("%d %d %d", &partyA, &partyB, &partyC);

    currentCouncilor = partyA + partyB + partyC;

    if(currentCouncilor < 200){
        printf("Gerekli toplanti sayisi bulunamdigindan ");
        printf("toplantiya ara verildi\n");
        printf("Toplnati yeter sayisi 200 dur\n");
    }else {
        printf("Meclis toplantiya hazir\n");
    }


    // Əlavə olunan sayının tək və ya cüt olmasını yoxlamaq

    int anyNum;

    printf("Enter a anynumber:");
    scanf("%d",&anyNum);

    if(anyNum % 2 == 0){
        printf("%d is an even number\n", anyNum);
    }else {
        printf("%d id an odd number\n", anyNum);
    }

    // User dən alınan 3 ədədin ən böyüyünün və ən kiçiyinin tapılması

    int number1, number2, number3, max, min;

    printf("Enter three numbers:");
    scanf("%d %d %d",&number1,&number2,&number3);

    if(number1 > number2 && number1 > number3){
        max = number1;
    }else if(number2 > number1 && number2 > number3){
        max = number2;
    }else {
        max = number3;
    }

    if(number1 < number2 && number1 < number3){
        min = number1;
    }else if(number2 < number1 && number2 < number3){
        min = number2;
    }else {
        min = number3;
    }

    printf("The Largest Number: %d\n", max);
    printf("The Least Number: %d", min);

    // Tərəfləri məlum olna üçbucağın hansı tip üçbucağa aid olmasını təyin etmək

    int a,b,c;
    char longestSide;

    printf("Enter the side lenghts of the triangle:");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c){
        longestSide='a';
    }else if(b>a && b>c){
        longestSide='b';
    }else{
        longestSide='c';
    }
    

    if(longestSide == 'a'){
        if(a*a == b*b + c*c){
            printf("Iti bucaqli ucbucaq");
        }else if (a*a < b*b + c*c)
        {
            printf("Korbucaqli ucbucaq");
        }else{
            printf("Bele ucbucaq ola bilmez");
        }
        
    }else if (longestSide == 'b')
    {
        if(b*b== a*a + c*c){
            printf("Duzbucaqli bucaqli ucbucaq");
        }else if (b*b < a*a + c*c)
        {
            printf("Korbucaqli ucbucaq");
        }else{
            printf("Bele ucbucaq ola bilmez");
        }
    }else{
        if(c*c > b*b + c*c){
            printf("Iti bucaqli ucbucaq");
        }else if (c*c < b*b + a*a)
        {
            printf("Korbucaqli ucbucaq");
        }else{
            printf("Bele ucbucaq ola bilmez");
        }
    }
    

    /* 
    Girilən 4 rəqəmli ədədin (abcd) ilk2 rəqəminin yaratdığı sayla (ab) son 2 rəqəminin yaratdığı 
    sayın cəmlərinin kvadratı bu saya bərabərdirmi. Əgər bərabərdisə onda bu xüsusi saydır.
    */

   int number, newNumber, partOne, partTwo ;

   printf("Enter a 4 digit number: ");
   scanf("%d", &number);

    partOne = number/100; //ab
    partTwo = number%100; //cd

    newNumber = (partOne + partTwo)*(partOne + partTwo);

    if(newNumber == number){
        printf("%d axdarılan xüsusi rəqəm.\n", number);
    }else{
        printf("%d xususi sayi deyil\n", number);
    }

    /*Bir mobil şəbəkə operatoru 4 dk danisiq üçün 0.50 qəp. olaraq təyin etmişdir.
    Amma 4 dk keçən danışıqlar üçün  əlavə olaraq 0.12 qəp alacaqdır.
    Danışıq vaxtını dəqiqə ilə əldə edib və danışığın qiymətini hesablayan C yazaq.
    */

    float talkTime, fee ;

    printf("Phone talk time:");
    scanf("%f", &talkTime);

    if(talkTime <= 4.0){
        fee = 0.30;
    }else{
        fee = 0.30 + (talkTime - 4.0) * 0.07;
    }
    printf("Fee: %.2f AZN\n", fee);

    /*
    Bir üçbucağın bərabərtərəfli, bərabəryanlı yoxsa adi bir üçbucaq olduğunu yoxlayan program.
    */

   int angleOne, angleTwo, angleThree;

   printf("Enter three angles:");
   scanf("%d %d %d", &angleOne, &angleTwo, &angleThree);

   if ((angleOne + angleTwo + angleThree) != 180)
   {
        printf("these angles do not form triangles\n");

   }else{
        if(angleOne == 60 && angleTwo == 60 && angleThree == 60){
            printf("This is an equilateral triangle\n");
        }else if(angleOne == angleTwo || angleOne == angleThree || angleTwo == angleThree){
            printf("This is an isosceles triangle\n");
        }else{
            printf("This is a scalene triangle\n");
        }
        
   }

    /*
    Hər hansı bir elementi alırıq və onun hərf olub olmadığını və böyükmü kiçikmi olduğunu tapan program
    */

   char myCharacter;

   printf("Enter a character:");
   scanf("%c", &myCharacter);

   if (myCharacter >= 'A' && myCharacter <= 'Z')
   {
    printf("%c is an uppercase letter\n", myCharacter);
   }else if (myCharacter >= 'a' && myCharacter <= 'z')
   {
    printf("%c is a lowercase letter\n", myCharacter);
   }else{
    printf("it is not a letter\n");
   }
   
    return 0;
}