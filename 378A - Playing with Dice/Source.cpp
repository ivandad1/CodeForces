#include<stdio.h>
#include<cmath>

using namespace std;

int main(void){
	int a, b;
	scanf("%d %d",&a,&b);
	int x[]= {0,0,0};
	for(int i=1;i<=6;++i){
		if(abs(i-a)<abs(i-b))
			x[0]++;
		else if(abs(i-a)>abs(i-b))
			x[2]++;
		else
			x[1]++;		
	}
	printf("%d %d %d",x[0],x[1],x[2]);	
	return 0;
}
