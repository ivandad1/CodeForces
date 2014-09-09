#include<stdio.h>

using namespace std;

int main(void){
    int n;
    scanf("%d",&n);    
    printf("%d",n);    
    int nn = n<<1;
    for(int i=n+1;i<nn;++i)
        printf(" %d",i);    
    return 0;
}
