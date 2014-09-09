#include<stdio.h>

bool isangle(int ang){
	int n=3;
	while(180*(n-2)/n<ang){
		n++;
	}
	if(ang*n==180*(n-2))return true;	
	return false;
}

int main(void){
	int n, a;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d",&a);
		if(isangle(a))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}