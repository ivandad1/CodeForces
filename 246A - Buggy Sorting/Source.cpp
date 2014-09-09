#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    if(n<3){
        printf("-1");
        return 0;
    }
    for(int i=n;i>1;i--){
        printf("%d ",i);
    }
    printf("1");
    return 0;
}