#include<stdio.h>

int primes[51];

void Hallar_primos(){        
    primes[1]=0;
    for(int i=3;i<8;i+=2)
        if(primes[i]==0)
            for(int j=i;j<=50/i;j+=2)
                primes[i*j]=1;    
}

int main(void){
	Hallar_primos();
	int n,m;
	scanf("%d %d",&n, &m);
	if(n==2){
		if(m==3)printf("YES");
		else printf("NO");
		return 0;
	}	
	for (int i = n+2; i < m; i+=2){
		if(primes[i]==0){
			printf("NO");
			return 0;
		}
	}
	if(primes[m]==0 && m%2==1)printf("YES");
	else printf("NO");
	return 0;
}