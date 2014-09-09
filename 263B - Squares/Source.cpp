#include<stdio.h>
#include<algorithm>

using namespace std;

bool compare(int a, int b){return a>b;}

int main(void){
    int n, k;
    scanf("%d %d",&n,&k);
    if(k>n){
        printf("-1");
        return 0;
    }
    int v[50];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    std::sort(v,v+n,compare);
    printf("%d %d",v[k-1],v[k-1]);
    return 0;
}