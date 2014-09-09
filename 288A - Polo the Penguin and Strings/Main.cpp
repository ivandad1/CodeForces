#include<stdio.h>

int main(void){
    int n, k,m=99;
    scanf("%d %d",&n, &k);
    if(n<k || (n>1 && k==1)){   
        printf("-1");
        return 0;
    }   
    if(n==1 && k==1){   
        printf("a");
        return 0;
    }   
    for(int i=0;i<n-k+2;i++){
        if(i%2==0)printf("a");
        else printf("b");
    }
    for(int i=n-k+2;i<n;i++){
        printf("%c",(char)m);
        m++;
    }
}