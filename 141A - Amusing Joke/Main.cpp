#include<stdio.h>
#include<algorithm>
#include<cstring>

int main(void){
	char cad[200], c1[200],c2[200];
	scanf("%s",&c1);
	int lc1=strlen(c1);
	scanf("%s",&c2);
	int lc2=strlen(c2);
	scanf("%s",&cad);	
	int lcad=strlen(cad);
	if(lcad!=lc1+lc2){
		printf("NO");
		return 0;
	}
	for (int i = lc1; i < lcad; i++)
		c1[i]=c2[i-lc1];	
	std::sort(c1,c1+lcad);
	std::sort(cad,cad+lcad);
	for (int i = 0; i < lcad; i++)
		if(cad[i]!=c1[i]){
			printf("NO");
			return 0;
		}	
	printf("YES");
	return 0;
}