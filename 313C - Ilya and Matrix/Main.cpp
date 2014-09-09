#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
long long vec[2000000];

int main(void){
	long n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&vec[i]);
	}
	std::sort(vec,vec+n);
	int act = 1;
	long cn = n;
	while(cn>1){
		cn/=4;
		act++;
	}
	unsigned long long int suma = 0;
	int lcn =0;
	while(cn<=n){		
		for (int i = lcn ; i < cn; i++){
			suma+=vec[n-i-1]*act;
		}
		lcn = cn;
		cn*=4;
		act--;
	}
	printf("%I64d\n",suma);
	return 0;
}