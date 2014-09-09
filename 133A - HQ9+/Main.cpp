#include<stdio.h>
#include<cstring>

int main(void){
	char c[100];
	scanf("%s",&c);
	int len=strlen(c);
	bool pr=false;
	for (int i = 0; i < len; i++){
		if(c[i]=='H' || c[i]=='Q' || c[i]=='9'){
			printf("YES\n");
			pr=true;
			break;
		}
	}
	if(!pr)printf("NO\n");
	return 0;
}