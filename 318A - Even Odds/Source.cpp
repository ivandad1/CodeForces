#include<stdio.h>

int main(void){
	long long n, k;
	scanf("%I64d %I64d",&n,&k);
	long long n2 = (n+1)/2;
	if(k<=n2)printf("%I64d",(2*k-1));
	else printf("%I64d",(2*(k-n2)));
	return 0;
}