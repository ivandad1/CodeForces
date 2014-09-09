#include<stdio.h>

int main(void){
	int n;
	char c[10];
	scanf("%d",&n);
	int cont=0;
	for (int i = 0; i < n; i++){
		scanf("%s",&c);
		if(c[1]=='+')cont++;
	}
	printf("%d\n",(2*cont-n));
	return 0;
}