#include<stdio.h>
#include<algorithm>

using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    int vec[300001];
    for(int i=1;i<=n;i++)
        scanf("%d",&vec[i]);    
    std::sort(vec+1,vec+n+1);
    long long int total=0;
    for(int i=1;i<=n;i++)
        total+=abs(i-vec[i]);   
    printf("%I64d",total);
    return 0;
}