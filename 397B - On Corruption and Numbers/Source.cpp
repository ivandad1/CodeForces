#include<stdio.h>

using namespace std;

int main(void){
	int u;
	scanf("%d",&u);
	while(u--){
		int n,l,r;
		scanf("%d %d %d",&n,&l,&r);
		int a = l,b = n/r;
		a*=b;
		b*=r;
		if(b==n){
			printf("Yes\n");
			continue;		
		}
		a+=l;
		b+=r;		
		if(a<=n && n<=b){
			printf("Yes\n");
		}else{
			printf("No\n");
		}		
	}
	return 0;
}
