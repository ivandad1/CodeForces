#include<stdio.h>

int min(int a, int b){
	if(a<b)return a;
	return b;
}

 int Mcd(int n, int m) {
    for (int i = min(n, m); i > 1; i--) {
        if(n%i==0 && m%i==0) {
            return i;
        }            
    }
    return 1;
}

int main(void){
	int p[2],n,i=-1;
	scanf("%d %d %d",&p[0],&p[1],&n);	
	while(n>0){
		i=(i+1)%2;
		n-=Mcd(p[i],n);		
	}
	printf("%d\n",i);
	return 0;
}