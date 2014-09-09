#include<stdio.h>
#include<cstring>

int main(void){
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		char c[100];
		scanf("%s",&c);
		int sz=strlen(c);
		if(sz>10){
			printf("%c%d%c\n",c[0],(sz-2),c[sz-1]);
		}else{
			printf("%s\n",c);
		}
	}
	return 0;
}