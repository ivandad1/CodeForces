#include<stdio.h>
#include<cstring>

int main(void){
	char c[20];
	scanf("%s",&c);
	int ln=0;
	for (int i = 0; i < strlen(c); i++){
		if(c[i]=='4' || c[i]=='7')ln++;
	}
	if(ln==4 || ln==7)printf("YES\n");
	else printf("NO\n");
	return 0;
}