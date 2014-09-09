#include<stdio.h>
#include<algorithm>
using namespace std;

long long int gcd(long long int a, long long int b){
	return b==0?a:gcd(b,a%b);
}

int main(void){
	long long int a,b,x,y;
	scanf("%I64d %I64d %I64d %I64d",&a,&b,&x,&y);	
	int g = gcd(x,y);
	x/=g;
	y/=g;
	if(a<x || b<y){
		printf("0 0");
		return 0;			
	}	
	long long int t1 = a/x;
	long long int t2 = t1*y;
	t1*=x;
	long long int t4 = b/y;
	long long int t3 = t4*x;
	t4*=y;
	if(t1*t2>t3*t4 && t2<=b)
		printf("%I64d %I64d",t1,t2);		
	else
		if(t3<=a)
			printf("%I64d %I64d",t3,t4);
		else
			printf("%I64d %I64d",t1,t2);
	return 0;
}
