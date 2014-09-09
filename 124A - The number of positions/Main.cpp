#include<stdio.h>

int max(int a, int b){
	if(a<b)return b;
	return a;
}

int main(void){
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	printf("%d",n-max(n-b-1,a));
	return 0;
}