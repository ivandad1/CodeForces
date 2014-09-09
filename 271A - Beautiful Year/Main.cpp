#include<stdio.h>

bool difdig(int n){
	bool dig[10];
	int t;
	for (int i = 0; i < 10; i++)dig[i]=false;
	while(n>0){
		t=n%10;
		if(dig[t])return false;
		dig[t]=true;
		n/=10;
	}
	return true;	
}

int main(void){
	int n;
	scanf("%d",&n);
	do{
		n++;
	}while(!difdig(n));
	printf("%d\n",n);
	return 0;
}