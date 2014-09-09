#include<stdio.h>

int numluck(int n){
	int cont=0, l;
	while(n>0){
		l=n%10;
		if(l==7 || l==4)cont++;
		n/=10;
	}
	return cont;
}

int main(void){
	int n,k,a, cont=0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d",&a);
		if(numluck(a)<=k)cont++;
	}
	printf("%d",cont);
	return 0;
}