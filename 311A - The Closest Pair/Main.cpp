#include<stdio.h>
#include<math.h>

int main(void){
	int n, k;
	scanf("%d %d",&n, &k);
	int tot = n*(n-1);
	tot/=2;
	if(tot<=k){
		printf("no solution\n");
		return 0;
	}
	printf("%d %d\n",0,0);
	for (int i = 1; i < n; i++){
		printf("%d %d\n",0,i);
	}	
	return 0;
}