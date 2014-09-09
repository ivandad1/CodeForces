#include<stdio.h>

int main(void){
    int n, min=101, pmin, max=-1, pmax;
    scanf("%d",&n);
    int v[100];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
        if(v[i]<=min){
            min=v[i];
            pmin=i;
        }
        if(v[i]>max){
            max=v[i];
            pmax=i;
        }
    }
    if(min==max)printf("0\n");
    else if(pmin>pmax){
        printf("%d",(pmax+(n-1-pmin)));
    }else{
        printf("%d",(pmax+(n-2-pmin)));
    }
    return 0;
}