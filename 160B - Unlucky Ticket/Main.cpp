#include<stdio.h>
#include<algorithm>

int main(void){
	int n;
	scanf("%d",&n);
	char c[200];
	scanf("%s",&c);
	std::sort(c,c+n);
	std::sort(c+n,c+2*n);
	if(c[0]==c[n]){
		 printf("NO");
		 return 0;
	}
	bool men=c[0]<c[n], un=true;;
	
	if(men){
		for (int i = 1; i < n; i++){
			if(c[i]>=c[i+n]){
				un=false; 
			}
		}
	}else{
		for (int i = 1; i < n; i++){
			if(c[i]<=c[i+n]){
				un=false; 
			}
		}
	}
	if(un)printf("YES");
	else printf("NO");
	return 0;
}