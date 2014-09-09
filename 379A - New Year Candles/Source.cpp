#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int th = 0;
    int r = 0;
    while(a>0){
        th+=a;
        r+=a;
        a=r/b;
        r%=b;
    }
    printf("%d\n",th);
    return 0;
}
