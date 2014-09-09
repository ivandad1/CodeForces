#include<stdio.h>

int main(void){
	int n, t, x, y;
	scanf("%d",&n);
	int w[102];
	for(int i=1;i<=n;i++)
		scanf("%d",&w[i]);
	scanf("%d",&t);
	for (int i = 0; i < t; i++){
		scanf("%d %d",&x, &y);
		w[x-1]+=y-1;
		w[x+1]+=w[x]-y;
		w[x]=0;
	}
	for(int i=1;i<=n;i++)
		printf("%d\n",w[i]);
	return 0;
}