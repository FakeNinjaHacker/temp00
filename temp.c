#include<stdio.h>
#include "temp.h"

void convertTemp( enum Unit from, float value){

    if(from == CELSIUS ){
        float Fahrenheit = C_TO_F(value);
        printf("%f CELSIUS = %f FAHRENHEIT\n", value, Fahrenheit);
    }

    if(from == FAHRENHEIT){
        float Celsius = F_TO_C(value);
        printf("%f FAHRENHEIT = %f CELSIUS\n", value, Celsius);
    }

}
