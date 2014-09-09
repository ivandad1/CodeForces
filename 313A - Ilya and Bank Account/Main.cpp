#include<stdio.h>

int main(void){
	long long n;
	scanf("%I64d",&n);
	if(n>0)printf("%I64d\n",n);
	else{
		long long n2 = n/10, n3 = (n/100);
		n3*=10;
		n3+=n%10;
		if(n2>n3)printf("%I64d\n",n2);
		else printf("%I64d\n",n3);
	}
	return 0;
}