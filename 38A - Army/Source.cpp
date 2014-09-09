#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int d[110];
	for(int i=1;i<n;++i){
		scanf("%d",&d[i]);
	}
	int a, b;
	scanf("%d %d",&a,&b);
	int y = 0;
	for(int i=a;i<b;++i)
		y+=d[i];
	printf("%d",y);
	return 0;
}
