#include<stdio.h>

int main(void){
    int n,k;
    scanf("%d %d",&n,&k);
    int to = n-k;
    for(int i=1;i<to;i++)
        printf("%d ",i);    
    for(int i=n;i>to;i--)
        printf("%d ",i);    
    printf("%d",to);
    return 0;
}