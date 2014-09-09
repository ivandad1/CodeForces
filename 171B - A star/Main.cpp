#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	n--;
	long m=n*(n+1)/2;
	m*=12;
	m++;
	printf("%I32d",m);
	return 0;
}