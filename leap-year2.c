
#include <stdio.h>
int main() {
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    if((n%4==0 && n%100!=0) || (n%400==0)){
        printf("The year is leap year");
    }
    else{
        printf("The year is not leap year");
    }
    return 0;
}