#include<stdio.h>
#include<cstring>

int main(void){
	char s1[100],s2[100];
	scanf("%s\n%s", &s1, &s2);
	int len=strlen(s1);
	bool pr=false;
	for (int i = 0; i < len; i++){
		int l1=(int)s1[i],l2=(int)s2[i];
		if(l1>95)l1-=32;
		if(l2>95)l2-=32;
		if(l1!=l2){
			if(l1<l2)printf("-1\n");
			else printf("1\n");
			pr=true;
			break;
		}
	}
	if(!pr)printf("0\n");
	return 0;
}