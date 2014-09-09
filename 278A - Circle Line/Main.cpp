#include<stdio.h>

int min(int a, int b){
	return (a<b)? a : b;
}

int max(int a, int b){
	return (a<b)? b : a;
}

int main(void){
	int n, d[100], c1,c2, sum=0, sump=0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&d[i]);
		sum+=d[i];
	}
	scanf("%d %d",&c1,&c2);
	for (int i = min(c1,c2)-1; i < max(c1,c2)-1; i++)
		sump+=d[i];	
	printf("%d",min(sump, sum-sump));
	return 0;
}