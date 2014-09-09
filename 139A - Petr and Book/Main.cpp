#include<stdio.h>

int main(void){
	int n, d[7], pl=0, k=-1;
	scanf("%d",&n);
	scanf("%d %d %d %d %d %d %d",&d[0],&d[1],&d[2],&d[3],&d[4],&d[5],&d[6]);
	while(pl<n){
		k++;
		k%=7;
		pl+=d[k];
	}
	printf("%d",k+1);
	return 0;
}