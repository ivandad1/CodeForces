#include<stdio.h>

int main(void){
	int n, n4[]={0,0}, n7[]={0,0};
	char s[50];
	scanf("%d",&n);
	scanf("%s",&s);
	for (int k = 0; k < 2; k++){
		for (int i = k*n/2; i < k*n/2+n/2; i++){
			if(s[i]=='4')n4[k]++;
			else if(s[i]=='7')n7[k]++;
			else{
				printf("NO");
				return 0;
			}
		}
	}
	if(n4[0]*4+n7[0]*7==n4[1]*4+n7[1]*7)printf("YES");
	else printf("NO");	
	return 0;
}