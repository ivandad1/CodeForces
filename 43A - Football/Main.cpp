#include<stdio.h>
#include<cstring>

bool equal(char a[], char b[]){
	if(strlen(a)!=strlen(b))return false;
	for (int i = 0; i < strlen(a); i++){
		if(a[i]!=b[i])return false;
	}
	return true;
}

int main(void){
	int n, cont[2];
	scanf("%d",&n);
	char a[10],b[10];
	char s[10];
	scanf("%s",&s);
	cont[0]=1;
	cont[1]=0;
	int len;
	bool don=false;
	for (int i = 1; i < n; i++){		
		scanf("%s",&a);
		if(equal(s,a))cont[0]++;
		else {
			cont[1]++;
			if(!don){
				len=strlen(a);
				for (int i = 0; i < len; i++){
					b[i]=a[i];
				}
				don=true;
			}
		}
	}
	if(cont[0]>cont[1])printf("%s\n",s);
	else {
		for (int i = 0; i < len; i++){
			printf("%c",b[i]);
		}
		
	}
	return 0;
}