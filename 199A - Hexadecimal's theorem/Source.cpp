#include<stdio.h>

int main(void){
    int f[45];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<45;i++){
        f[i]=f[i-1]+f[i-2];
    }
    int n, fib;
    scanf("%d",&n);
    for(int i=0;i<45;i++){
        if(f[i]==n){
            fib=i;
            break;
        }
    }
    switch(fib){
        case 0:
            printf("0 0 0");
            break;
        case 1: 
            printf("0 0 1");
            break;
        case 2: 
            printf("0 0 1");
            break;
        case 3: 
            printf("0 1 1");
            break;
        default:
            printf("%d %d %d",f[fib-4],f[fib-3],f[fib-1]);
    }
    return 0;
}