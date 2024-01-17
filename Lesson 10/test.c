#include<stdio.h>
#include<stdlib.h>

int main(){

    // Qabdakı təzyiqin tapılması

    float pressure, constantR;
    int numberOfMoles, volume, heat;
    constantR = 0.82;

    printf("Enter volume of the bowl:");
    scanf("%d",&volume);
    printf("Enter heat of the bowl:");
    scanf("%d",&heat);
    printf("Enter the number of molecule in bowl:");
    scanf("%d",&numberOfMoles);

    pressure = (constantR*heat*numberOfMoles)/volume;

    printf("In bowl presure is - %f\n", pressure);


    // Counter APP

    float odenecekFatura, eskiBirimFiyat, yeniBirimFiyat;
    float enflasyon, eskiAboneUcreti, yeniAboneUcreti;
    int yeniOkuma, eskiOkuma, toplamHarcananElektrik;


    printf("Enflasyon oranini girin:");
    scanf("%f",&enflasyon);
    printf("Onceki aya ait birim fiyatini girin:");
    scanf("%f",&eskiBirimFiyat);
    printf("Onceki aya ait abonelik ucretini girin:");
    scanf("%f",&eskiAboneUcreti);
    printf("Bir onceki aya ait okuma degerini girin:");
    scanf("%d",&eskiOkuma);
    printf("Bu aya ait okuma degerini girin:");
    scanf("%d", &yeniOkuma);

    toplamHarcananElektrik =  yeniOkuma - eskiOkuma;
    yeniBirimFiyat = eskiBirimFiyat * (1 + enflasyon / 100);
    yeniAboneUcreti = eskiAboneUcreti * (1+ enflasyon / 100);

    odenecekFatura = toplamHarcananElektrik * yeniBirimFiyat + yeniAboneUcreti;

    printf("\n Odeyeceyiniz mebleg: %f\n\n", odenecekFatura);

    // APP Verilən rəqəmin 10 luqdakı və təklikdəki rəqəmlərinin cəmini tap

    int myNumber, firstNum, secondNum;

    printf("Enter a positive number:");
    scanf("%d",&myNumber);

    firstNum = myNumber % 10;
    secondNum = (myNumber % 100) / 10;

    printf("First number:%d\n",firstNum);
    printf("Second number:%d",secondNum);


    // Daxil edilən 4 rəqəmin ədədi ortası tapılması

    float a,b,c,d,average;

    printf("Enter 4 number:");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    average = (a + b + c + d)/4;

    printf("Average of numbers - %f", average);

    return 0;
    
}