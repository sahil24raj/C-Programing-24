
#include <stdio.h>
int main() {
    int a=12,b=25,c=7;
    if(a>b && a>c) printf("%d is largest",a);
    else if(b>a && b>c) printf("%d is largest",b);
    else printf("%d is largest",c);
    return 0;
}
