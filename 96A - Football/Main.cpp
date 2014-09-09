#include<stdio.h>
#include<cstring>

int main(void){
	char s[100];
	int p1=0,p0=0;
	bool pr=false;
	scanf("%s",&s);
	for (int i=0; i<strlen(s); i++){
		if(s[i]=='1'){
			p1++;
			p0=0;
		}else{
			p1=0;
			p0++;
		}
		if(p0==7 || p1==7){
			pr=true;
			printf("YES");
			break;
		}
	}
	if(!pr)printf("NO");
	return 0;
}