#include<stdio.h>

int main(void){
	int n,mod;
	scanf("%d",&n);
	int pa=0, temp[3];
	for (int i = 0; i < 3; i++){
		scanf("%d",&temp[i]);
		if(temp[i]%2==0)pa++;
	}
	if(pa==1){
		for (int i = 0; i < 3; i++){
			if(temp[i]%2==0){
				printf("%d\n",(i+1));
				return 0;
			}
		}
	}
	if(pa==2){
		for (int i = 0; i < 3; i++){
			if(temp[i]%2==1){
				printf("%d\n",(i+1));
				return 0;
			}
		}
	}
	if(pa==3)mod=1;
	else if(pa==0)mod=0;
	for (int i = 3; i < n; i++){
		scanf("%d",&temp[0]);
		if(temp[0]%2==mod){
			printf("%d\n",(i+1));
			return 0;
		}
	}	
	return 0;
}