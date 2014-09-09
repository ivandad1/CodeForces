#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(void){
    int n, v[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);    
    }
    std::sort(v,v+n);    
    for(int i=1;i<n;i++){
        if(v[i]%v[0]!=0){
            printf("-1");
            return 0;
        }
    }
    printf("%d",v[0]);
    return 0;
}