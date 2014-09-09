#include<stdio.h>

int main(void){
	unsigned long long int v[4];
	scanf("%I64d %I64d %I64d %I64d", &v[0], &v[1], &v[2], &v[3]);
	int dif=1;
	bool in;
	for(int i=1;i<4;i++){
		in=false;
		for(int j=0;j<i;j++)
			if(v[i]==v[j])in=true;	
		if(!in)dif++;		
	}
	printf("%d",(4-dif));
	return 0;
}