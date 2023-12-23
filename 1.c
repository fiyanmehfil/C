#include <stdio.h>

int main() {

    int salary, dear_allow, rent_allow;
    printf("Enter the basic salary of Ramesh : ");
    scanf("%d", &salary);
    dear_allow = (salary*40)/100;
    rent_allow = (salary*20)/100;
    printf("Dearness allowance = %d\n", dear_allow);
    printf("Rent allowance = %d\n", rent_allow);
    return 0;
}