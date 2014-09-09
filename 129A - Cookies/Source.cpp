#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int p=0, i=0;
	while(n--){
		int x;
		scanf("%d",&x);
		if(x&1)
			i++;
		else
			p++;
	}
	printf("%d",i%2?i:p);
	return 0;
}
