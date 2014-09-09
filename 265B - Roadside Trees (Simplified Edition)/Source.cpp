#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n,t;
    scanf("%d",&n);
    int ac = 0;
    long long int tot=2*n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        tot+=abs(t-ac);
        ac=t;
    }
    printf("%I64d",tot);
    return 0;
}