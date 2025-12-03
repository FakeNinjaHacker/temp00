#include<stdio.h>
#include "temp.h"

int main(){

    int num;
    float Celsius;
    float Farhenheit;

    printf("Choose Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    scanf("%d",&num);

    if(num == 1){

    printf("Enter Celsius : ");
    scanf("%f",&Celsius);
    convertTemp(num, Celsius);
    }

    else if(num == 2){

    printf("Enter Fahrenheit : ");
    scanf("%f",&Farhenheit);
    convertTemp(num, Farhenheit);

    }

    else {
        printf("Invalid Choice\n");
    }



    return 0;
}