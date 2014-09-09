#include<stdio.h>

int main(void){
	int k,l,m,n,d;
	bool num[11];
	num[1]=false;
	scanf("%d\n%d\n%d\n%d\n%d",&k,&l,&m,&n,&d);
	num[k]=true;
	num[l]=true;
	num[m]=true;
	num[n]=true;
	if(num[1])printf("%d\n",d);
	else{
		int cont=0;
		for (int i = 1; i <= d; i++){
			if((i%k==0 && i>=k) || (i%l==0 && i>=l) || (i%m==0 && i>=m) || (i%n==0 && i>=n))cont++;
		}
		printf("%d\n",cont);
	}
	return 0;
}