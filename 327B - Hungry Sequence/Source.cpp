#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int primes[10000000];

void Hallar_primos(){        
    primes[1]=0;
    for(int i=3;i<=3162;i+=2)
        if(primes[i]==0)
            for(int j=i;j<=10000000/i;j+=2)
                primes[i*j]=1;    
}

int main(void){
    Hallar_primos();
    int n,t=1;
    scanf("%d",&n);
    printf("2");
    int ac = 3;
    while(t<n){
        if(primes[ac]==0){
            printf(" %d",ac);
            t++;
        }
        ac+=2;
    }
    return 0;
}
