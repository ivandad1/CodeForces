#include<stdio.h>

int main(void){
	int n,max=0, in=0, a,b;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d %d",&a,&b);
		in+=b-a;
		if(in>max)max=in;
	}
	printf("%d\n",max);
	return 0;
}