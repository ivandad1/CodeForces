#include<stdio.h>
#include<math.h>

using namespace std;
#define mod 1000000007

int modpow(unsigned long long int b, unsigned long long int e, unsigned long long int m){
	if(e==0){
		return 1;
	}
	if(e==1){
		return b;
	}
	if(e%2==0){
		return modpow((b*b)%m,e/2,m)%m;
	}	
	return b*modpow((b*b)%m,(e-1)/2,m)%m;
}

int main(void){
	unsigned long long int n;
	scanf("%llu",&n);
	if(n==0){
		printf("1");
		return 0;
	}
	unsigned long long int nu = modpow(2,n-1,mod);
	unsigned long long int nn = (nu*2+1)*nu;
	printf("%llu\n",nn%mod);
	return 0;
}
