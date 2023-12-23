#include <stdio.h>
int main(){
    float l, b, r, per, ar, pi, area, cir;
    printf("Enter the length & breadth of the Rectangle\n");
    printf("Length : ");
    scanf("%f", &l);
    printf("Breadth : ");
    scanf("%f", &b);
    printf("Enter the radius of circle : ");
    scanf("%f", &r);
    per=(l+b)/2;
    ar=l*b;
    pi = 3.14;
    area=pi*r*r;
    cir= 2*pi*r;
    printf("Area of Rectangle : %.2f\n", ar);
    printf("Perimeter of Rectangle : %.2f\n", per);
    printf("Area of Circle : %.2f\n", area);
    printf("Circumference of Circle : %.2f\n", cir);

}