#include<stdio.h>

int main(void){
	int n, k, in = 0;
	scanf("%d %d",&n,&k);
	k=5-k;
	while(n--){
		int x;
		scanf("%d",&x);
		if(x<=k)
			++in;
	}
	printf("%d",in/3);
}
