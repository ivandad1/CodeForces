#include<stdio.h>
#include<cstring>

using namespace std;

int main(void){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int vec[101];
    while(a--){
        int x;
        scanf("%d",&x);
        vec[x]=1;
    }
    while(b--){
        int x;
        scanf("%d",&x);
        vec[x]=2;
    }
    printf("%d",vec[1]);
    for(int i=2;i<=n;++i)
        printf(" %d",vec[i]);
    return 0;
}
