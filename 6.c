#include <stdio.h>
int main(){
    int a=1189, b=841, i, t;
    for(i=0;i<=8;i++){
         printf("A%d : %d x %d\n", i, a, b);
         t = a;
         a = b;
         b = t/2;
    }

}