#include<stdio.h>

int main(void){
	int cont=0,n,temp;
	scanf("%d\n",&n);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d",&temp);
			if(i==j || i==(n+1)/2 || j==(n+1)/2 || i+j==n+1)cont+=temp;
		}
	}
	printf("%d\n",cont);
	return 0;
}