#include <stdio.h>
int main(){
    float k, m, f, i, c;
    printf("Enter the distance between two cities : ");
    scanf("%f", &k);
    m = k*1000;
    f = k*3280.84;
    i = k*39370.1;
    c = k*100000;
    printf("Meter = %.2f\n", m);
    printf("Feet = %.2f\n", f);
    printf("Inch = %.2f\n", i);
    printf("Centimeter = %.2f\n",c);
}