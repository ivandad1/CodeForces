#include<stdio.h>

int main(void){
	int n, v[101], c[101];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&v[i]);
	for(int i=1;i<=n;i++)
		c[v[i]]=i;	
	for(int i=1;i<n;i++)
		printf("%d ",c[i]);
	printf("%d ",c[n]);
}