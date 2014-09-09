#include<stdio.h>
#include<cstring>

int main(void){
	char s[100];
	scanf("%s",&s);
	int cod=(int)s[0], len=strlen(s);
	bool may;
	if(cod<90)may=true;
	bool chang=true;
	for (int i = 1; i < len; i++){
		if((int)s[i]>90){
			chang=false;
			break;
		}
	}
	if(chang){
		int l;
		for (int i = 0; i < len; i++){
			l=(int)s[i];
			if(l<91)printf("%c",(char)(l+32));
			else printf("%c",(char)(l-32));
		}
	}else{
		for (int i = 0; i < len; i++){
			printf("%c",s[i]);
		}
	}
	return 0;
}