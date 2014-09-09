#include<stdio.h>

int main(void){
	int n, cont=0;
	scanf("%d",&n);
	int a,b,c;
	for (int i = 0; i < n; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a+b+c>1)cont++;
	}
	printf("%d\n", cont);
	return 0;
}