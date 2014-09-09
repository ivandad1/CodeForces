#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	long long int i = 1, suma = 0;
	for(;n>0;n--, i++){
		suma+=(n-1)*i+1;
	}
	printf("%d",suma);
	return 0;
}
