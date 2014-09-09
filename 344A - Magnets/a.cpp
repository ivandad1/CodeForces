#include<stdio.h>

using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	int ca = 0;
	int la = 0;
	while(n--){
		int no;
		scanf("%d",&no);
		if(no!=la)
			ca++;
		la=no;
	}
	printf("%d",ca);	
	return 0;
}
