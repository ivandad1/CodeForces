#include<stdio.h>

int main(void){
	int n,m;
	scanf("%d %d",&n,&m);
	int cont=0, temp;
	for (int i = 0; i < m; i++){
		scanf("%d",&temp);
		if(temp>0)cont++;
	}
	if(temp>0){
		int ctemp=temp;	
		while(temp==ctemp && cont<n){
			scanf("%d",&temp);
			cont++;
		}
		if(temp!=ctemp)cont--;
	}	
	printf("%d\n",cont);
	return 0;
}