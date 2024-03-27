#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(b%10)*a;
    int d=((b/10)%10)*a;
    int e=(b/100)*a;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",c+d*10+e*100);
    return 0;
}