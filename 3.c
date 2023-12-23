#include <stdio.h>
int main(){
    int eng, math, soc, sce, hin, tot, per;
    printf("Enter the mark of each subject\n");
    printf("English : ");
    scanf("%d", &eng);
    printf("Maths : ");
    scanf("%d", &math);
    printf("Social : ");
    scanf("%d", &soc);
    printf("Science : ");
    scanf("%d", &sce);
    printf("Hindi : ");
    scanf("%d", &hin);
    tot = eng+math+soc+sce+hin;
    per = (tot*100)/500;
    printf("Total mark = %d\n", tot);
    printf("Percentage = %d\n", per);
    }