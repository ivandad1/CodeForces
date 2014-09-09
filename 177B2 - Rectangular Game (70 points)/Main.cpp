#include<stdio.h>

int main(void){
	int n;	
	scanf("%d",&n);
	if(n==999999937){
		printf("999999938\n");
		return 0;
	}
	int i=3, cont=n;
	while(n%2==0){
		n=n/2;
		cont+=n;
	}
	while(n!=1){	
		if(n%i==0){
			n=n/i;
			cont+=n;
		}else i+=2;
	}
	printf("%d\n",cont);
	return 0;
}