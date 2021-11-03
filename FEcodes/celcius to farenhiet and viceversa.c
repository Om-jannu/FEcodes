#include <stdio.h>

float main() {
    float celc,far;
    printf("enter temp in celcius=");
    scanf("%f",&celc);
    
    far=(celc*1.8)+32;
    printf("*****RESULT*****");
    printf("\ntemp in farenhiet=%.2f",far);
    
    printf("\n\nEnter temp in farenhiet=");
    scanf("%f",&far);
    celc=(far-32)*5/9;
    printf("*****RESULT*****");
    printf("\ntemp in farenhiet=%.2f",celc);
    
    return 0;
}