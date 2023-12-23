#include <stdio.h>
#include <math.h>
int main(){
    int x, y;
    float r,q;
    printf("Enter the Cartesian co-ordinates : ");
    scanf("%d%d", &x, &y);
    r = sqrt((x*x)+(y*y));
    q = atan(y/x);
    printf("Polar co-ordinates (%.2f,%.2f)", r, q);
}