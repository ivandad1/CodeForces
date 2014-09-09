#include<stdio.h>

int main(void){
	int n,cont=0,temp;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&temp);
		cont+=temp;
	}
	int ans=0;
	for (int i = 1; i <=5 ; i++){
		if((cont+i-1)%(n+1)==0){
			ans++;
		}
	}
	printf("%d\n",5-ans);
	return 0;
}