#include<stdio.h>

int main(void){
	int n;
	unsigned long long int m;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%I64d",&m);
		if(m%2==0)printf("%I64d\n",(4*m+1));
		else if((m+1)%4==0)printf("%I64d\n",(m+1));
		else printf("%I64d\n",(2*m+1));
	}	
	return 0;
}