#include<stdio.h>

int main(void){
	int n, m;
	scanf("%d %d",&n, &m);
	int cont=0;
	for (int a = 0; a < 33; a++)
		for (int b = 0; b < 33; b++)
			if((a*a)+b==n && a+(b*b)==m)cont++;
	printf("%d\n",cont);
	return 0;
}