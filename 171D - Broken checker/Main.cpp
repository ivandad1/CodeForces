#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	if(n!=5)printf("%d",(n%3)+1);
	else printf("%d",1);
	return 0;
}