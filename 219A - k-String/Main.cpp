#include<stdio.h>
#include<cstring>

int main(void){
	int n, c[26], len, po, t=0;
	char s[1000], e[500];
	for (int i = 0; i < 26; i++)c[i]=0;
	scanf("%d",&n);
	scanf("%s",&s);
	len = strlen(s);
	if(len%n!=0)printf("-1\n");
	else if(n==1)printf("%s\n",s);
	else{
		for (int i = 0; i < len; i++)c[((int)s[i])-97]++;
		bool pr=false;
		for (int i = 0; i < 26; i++){
			if(c[i]%n!=0){
				printf("-1\n");
				pr=true;
				break;
			}
			po=c[i]/n;	
			for (int j = 0; j < po; j++){
				e[t]=(char)(i+97);
				t++;
			}
		}
		if(!pr){
			for (int i = 0; i < n; i++){
				for (int j = 0; j < t; j++){
					printf("%c",e[j]);
				}
			}
		}
	}	
	return 0;
}