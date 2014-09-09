#include<stdio.h>
#include<cstring>

int main(void){
	char c1[200],c2[200];
	scanf("%s\n%s",&c1,&c2);
	int n=strlen(c1);
	for (int i = 0; i < n; i++){
		if(c1[i]!=c2[i])printf("1");
		else printf("0");
	}
	return 0;
}