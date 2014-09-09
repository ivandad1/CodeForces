#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int tc = 0, pd = 0;
	while(n--){
		int x;
		scanf("%d",&x);
		if(x<0){
			if(pd>0)
				pd--;
			else
				tc++;
		}else
			pd+=x;
	}
	printf("%d",tc);
	return 0;
}
