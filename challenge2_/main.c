#include <stdio.h>
#include <stdlib.h>

int main()
{

    float temperature_fahrenehei;
    float temperature_celsius;



    printf("entrer la température en Fahrenhei : ");
    scanf("%f",&temperature_fahrenehei);
    temperature_celsius = (temperature_fahrenehei-32)/1.8 ;
    if(temperature_celsius <=16){
        printf("tres froid : %f degre celisius\n",temperature_celsius);
    }else if(temperature_celsius <=26){
        printf("froid : %f degre celisius\n",temperature_celsius);
    }else if(temperature_celsius <=32){
        printf("chaud : %f degre celisius\n",temperature_celsius);
    }else{
        printf("tres chaud : %f degre celisius\n",temperature_celsius);
    }


    return 0;
}
