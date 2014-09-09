#include<stdio.h>
#include<cstring>

int main(void){
	char cad[100], h[]={'h', 'e', 'l', 'l', 'o'};
	scanf("%s",&cad);
	int n=strlen(cad), k=0;
	for(int i=0;i<n;i++){
		if(cad[i]==h[k])k++;
		if(k==5){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}