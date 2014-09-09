#include<stdio.h>

using namespace std;

int main(void){
	int n,m;
	scanf("%d %d",&n,&m);
	long long int total = 0, act = 1;
	while(m--){
		int x;
		scanf("%d",&x);
		if(x>act)
			total+=(x-act);
		else if(x<act)
			total+=(n-act)+x;		
		act = x;
	}
	printf("%I64d",total);
	return 0;	
}
