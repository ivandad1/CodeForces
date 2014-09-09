#include<stdio.h>
#include<cstring>

int main(void){
	char c[100];
	scanf("%s",&c);
	int p=0;
	for (int i = 0; i < strlen(c); i++){
		int cod=(int)c[i];
		if(cod<97)cod+=32;
		if(cod==97 || cod==101 || cod==105 || cod==111 || cod==117 || cod==121)continue;
		printf(".%c",(char)cod);
	}
	return 0;
}