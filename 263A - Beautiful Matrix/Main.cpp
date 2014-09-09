#include<stdio.h>

int abs(int n){
	if(n>=0)return n;
	return -n;
}

int main(void){
	int n;
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			scanf("%d",&n);
			if(n==1){
				printf("%d\n",(abs(3-i)+abs(3-j)));		
				break;
			}
		}
		if(n==1)break;
	}	
	return 0;
}