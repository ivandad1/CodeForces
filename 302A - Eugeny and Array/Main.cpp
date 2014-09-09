#include<stdio.h>

int main(void){
	int n, m, temp, cont=0;
	scanf("%d %d",&n,&m);
	for (int i = 0; i < n; i++){
		scanf("%d",&temp);
		if(temp==1)cont++;
	}
	int a,b,c;
	for (int i = 0; i < m; i++){
		scanf("%d %d",&a,&b);
		c=b-a+1;
		if(c%2==1){
			printf("0\n");
		}else{
			if(c/2<=cont && c/2<=n-cont)printf("1\n");
			else printf("0\n");
		}
	}	
	return 0;
}