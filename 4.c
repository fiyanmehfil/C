#include <stdio.h>
int main(){
    float f, c;
    printf("enter the Temperature of City in Fahrenheit degrees : ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("Centigrade degree = %.3f", c);
    
}