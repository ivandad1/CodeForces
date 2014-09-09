#include<stdio.h>

int main(void){
	long long int n;
	scanf("%I64d",&n);
	int l;
	bool on = false;
	int cuat = 0;
	int ld;
	while(n>0){
		l=n%10;
		ld=l;
		if(l==1){
			cuat=0;
		}else if(l==4){
			cuat++;
		}else{
			printf("NO");
			return 0;
		}
		if(cuat>2){
			printf("NO");
			return 0;
		}
		n/=10;
	}
	if(ld!=1)printf("NO");
	else printf("YES");
	return 0;
}