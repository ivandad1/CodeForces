#include<stdio.h>
#include<cstring>

int main(void){
	char s[100];
	scanf("%s",&s);
	int len=strlen(s);
	int up=0;
	for (int i = 0; i < len; i++){
		if((int)s[i]<95)up++;
	}
	if(up>(len-up)){
		for (int i = 0; i < len; i++){
			if((int)s[i]>95)printf("%c",(char)((int)s[i]-32));
			else printf("%c",s[i]);
		}
	}else{
		for (int i = 0; i < len; i++){
			if((int)s[i]<95)printf("%c",(char)((int)s[i]+32));
			else printf("%c",s[i]);
		}
	}
	return 0;
}