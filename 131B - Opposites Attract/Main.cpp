#include<stdio.h>

int main(void){
	int m, t;
	scanf("%d",&m);
	unsigned long long int p[11]={0,0,0,0,0,0,0,0,0,0,0}, n[11]={0,0,0,0,0,0,0,0,0,0,0};	
	for (int i = 0; i < m; i++){
		scanf("%d",&t);
		if(t>=0)p[t]++;
		else n[-t]++;
	}
	unsigned long long int suma=p[0]*(p[0]-1)/2;
	for (int i = 1; i < 11; i++){
		suma+=p[i]*n[i];
	}
	printf("%I64d",suma);
	return 0;
}