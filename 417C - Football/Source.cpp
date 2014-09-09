#include<stdio.h>

using namespace std;

int main(void){
	int n, k;
	scanf("%d %d",&n,&k);
	if(k>=(n+1)/2 || n<3){
		printf("-1");
		return 0;
	}
	int m = n*k;
	printf("%d\n",m);	
	for(int i = 1;i<=n;i++){
		for(int j=1;j<=k;++j){
			int t2 = i+j;
			if(t2>n)t2-=n;
			printf("%d %d\n",i,t2);
		}
	}
	return 0;
}
