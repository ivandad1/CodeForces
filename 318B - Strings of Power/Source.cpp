#include<stdio.h>
#include<cstring>
int main(void){
	int leng;
	char cad[1000000];
	scanf("%s",&cad);
	leng = strlen(cad);
	long long total = 0;
	long long heavy = 0;
	for(int i=0;i<leng-4;i++){
		if(cad[i]=='h'){
			if(cad[i+1]=='e' && cad[i+2]=='a' && cad[i+3]=='v' && cad[i+4]=='y'){
				heavy++;
				i+=4;
				continue;
			}
		}else if(cad[i]=='m'){
			if(cad[i+1]=='e' && cad[i+2]=='t' && cad[i+3]=='a' && cad[i+4]=='l'){
				total+=heavy;
				i+=4;
				continue;
			}
		}
	}
	printf("%I64d",total);
	return 0;
}