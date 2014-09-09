#include<stdio.h>

int main(void){
    char c[1000];
    scanf("%s",&c);
    if((int)c[0]>96)
        c[0]=(char)(((int)c[0])-32);
    printf("%s",c);
    return 0;
}