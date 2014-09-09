#include<stdio.h>

long voltear(long n){
    long v=0;
    while(n>0){
        v=v*10+(n%10);
        n=n/10;
    }
    return v;
}

int main(void){
	long a,b;
	scanf("%I32d %I32d",&a, &b);
	printf("%I32d",voltear(b)+a);
	return 0;
}