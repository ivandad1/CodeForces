#include<stdio.h>
#include<cstring>

int main(void){
	char c[100];
	bool isin[26];
	for (int i = 0; i < 26; i++)isin[i]=false;
	scanf("%s",&c);
	for (int i = 0; i < strlen(c); i++){
		isin[c[i]-97]=true;
	}
	int cont=0;
	for (int i = 0; i < 26; i++){
		if(isin[i])cont++;
	}
	if(cont%2==1)printf("IGNORE HIM!\n");
	else printf("CHAT WITH HER!\n");
	return 0;
}