#include<stdio.h>

int primes[1000000];

void Hallar_primos(){        
    primes[1]=0;
    for(int i=3;i<1000;i+=2)
        if(primes[i]==0)
            for(int j=i;j<=1000000/i;j+=2)
                primes[i*j]=1;    
}

int voltear(int n){
    int v=0;
    int cn=n;
    while(cn!=0){
        v=v*10+(cn%10);
        cn=cn/10;
    }
    return v;
}

int main(void){
	Hallar_primos();
	int n, vnum;
	scanf("%d",&n);
	int cont=0;
	int num=11;
	while(cont<n)	{
		num+=2;
		vnum=voltear(num);
		if(primes[num]==0 && primes[vnum]==0 && vnum%2==1 && num!=vnum)
			cont++;
	}
	printf("%d",num);
	return 0;
}