#include<stdio.h>

int main(void){
	unsigned long long int n,m,a;
	scanf("%I64d %I64d %I64d",&n,&m,&a);
	unsigned long long int i=n/a,j=m/a;
	if(n%a!=0)i++;
	if(m%a!=0)j++;
	printf("%I64d\n",(i*j));	
	return 0;
}